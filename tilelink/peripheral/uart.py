from nmigen import *
from nmigen.hdl import mem
from nmigen.utils import log2_int
from nmigen_soc.memory import MemoryMap
from nmigen_stdio.serial import AsyncSerialTX
import tilelink


class TilelinkUART(Elaboratable):
    def __init__(self, data_width=4, source_id_width=0):
        self.data_width = data_width
        self.source_id_width = source_id_width

        self.bus = tilelink.Interface(addr_width=log2_int(2*data_width), data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=log2_int(2*data_width), data_width=8)
        memory_map.add_resource(self, name="uart", size=2*data_width)
        self.bus.memory_map = memory_map

        self.tx_o = Signal()

    def elaborate(self, platform):
        m = Module()

        if platform:
            frequency = 45_000_000 # platform.default_clk_frequency
            divisor = int(frequency // 115200)
            print(frequency, divisor)
        else:
            divisor = int(1e6 // 115200)

        # Create the UART transmitter
        m.submodules.uart_tx = uart_tx = AsyncSerialTX(divisor=divisor)
        m.d.comb += self.tx_o.eq(uart_tx.o)

        # Automatically reset the ack when the byte is accepted
        with m.If(uart_tx.ack & uart_tx.rdy):
            m.d.sync += uart_tx.ack.eq(0)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready
        we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)

        with m.Switch(self.bus.a.address[self.bus.addr_local_width:]):
            with m.Case(0):
                with m.If(a_fire & we & self.bus.a.mask[0]):
                    m.d.sync += [
                        uart_tx.data.eq(self.bus.a.data[0:8]),
                        uart_tx.ack.eq(1),
                    ]

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # When channel A fires the response will be valid next cycle
        with m.If(self.bus.a.ready):
            m.d.sync += self.bus.d.valid.eq(self.bus.a.valid)

        # Assign the result messages
        with m.Switch(self.bus.a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                with m.Switch(self.bus.a.address[self.bus.addr_local_width:]):
                    with m.Case(0):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=Cat(uart_tx.data, Repl(0, 24)), size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(1):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=Cat(~uart_tx.rdy, Repl(0, 31)), size=self.bus.a.size, source=self.bus.a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.sync += self.bus.tilelink_access_ack(size=self.bus.a.size, source=self.bus.a.source)

        return m
