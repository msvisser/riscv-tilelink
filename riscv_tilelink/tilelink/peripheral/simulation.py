from nmigen import *
from nmigen.utils import log2_int
from nmigen_soc.memory import MemoryMap

from riscv_tilelink import tilelink


class TilelinkSimulationPeripheral(Elaboratable):
    def __init__(self, data_width=4, source_id_width=0):
        self.data_width = data_width
        self.source_id_width = source_id_width

        self.bus = tilelink.Interface(addr_width=log2_int(8 * data_width), data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=log2_int(8*data_width), data_width=8)
        memory_map.add_resource(self, name="simulation", size=8*data_width)
        self.bus.memory_map = memory_map

        self.sim_output_valid = Signal()
        self.sim_output = Signal(unsigned(8))
        self.halt_simulator = Signal(unsigned(6))

        self.external_interrupt = Signal()

    def elaborate(self, platform):
        m = Module()

        # Automatically reset the register to zero
        m.d.sync += self.sim_output_valid.eq(False)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready
        we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)

        for i in range(self.data_width):
            with m.If(a_fire & we & self.bus.a.mask[i]):
                with m.Switch(self.bus.a.address):
                    with m.Case(0):
                        m.d.sync += [
                            self.sim_output.word_select(i, 8).eq(self.bus.a.data.word_select(i, 8)),
                            self.sim_output_valid.eq(True),
                        ]
                    with m.Case(4):
                        m.d.sync += self.halt_simulator.word_select(i, 8).eq(self.bus.a.data.word_select(i, 8))
                    with m.Case(8):
                        m.d.sync += self.external_interrupt.word_select(i, 8).eq(self.bus.a.data.word_select(i, 8))

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # When channel A fires the response will be valid next cycle
        with m.If(self.bus.a.ready):
            m.d.sync += self.bus.d.valid.eq(self.bus.a.valid)

        # Assign the result messages
        with m.Switch(self.bus.a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                with m.Switch(self.bus.a.address):
                    with m.Case(0):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=self.sim_output, size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(4):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=self.halt_simulator, size=self.bus.a.size, source=self.bus.a.source)
                    with m.Case(8):
                        m.d.sync += self.bus.tilelink_access_ack_data(data=self.external_interrupt, size=self.bus.a.size, source=self.bus.a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.sync += self.bus.tilelink_access_ack(size=self.bus.a.size, source=self.bus.a.source)

        return m
