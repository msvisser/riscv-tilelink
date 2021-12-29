import struct
from amaranth import *
from amaranth_soc.memory import MemoryMap

from riscv_tilelink import tilelink


class TilelinkMemory(Elaboratable):
    counter = 0

    def __init__(self, addr_width, data_width=4, source_id_width=0, init=None, read_only=False):
        self.read_only = read_only

        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        memory_map = MemoryMap(addr_width=addr_width, data_width=8)
        memory_map.add_resource(self, name=f"mem{TilelinkMemory.counter}", size=2 ** addr_width)
        self.bus.memory_map = memory_map
        TilelinkMemory.counter += 1

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width
        self.memory_depth = 2 ** (self.addr_width - self.bus.addr_local_width)

        # Create the initialization if supplied
        self.init = []
        if isinstance(init, str):
            with open(init, 'rb') as infile:
                data = infile.read()
                data += b'\0' * (4 - (len(data) % 4))
                for (value,) in struct.iter_unpack("I", data):
                    self.init.append(value)
        elif isinstance(init, list):
            self.init = init

    def elaborate(self, platform):
        m = Module()

        # Create the memory and the read port
        memory = Memory(width=self.data_width_bits, depth=self.memory_depth, init=self.init)
        m.submodules.read_port = read_port = memory.read_port(transparent=False)

        # Create a copy of the A bus one cycle ago
        last_a = Record.like(self.bus.a)
        with m.If(self.bus.a.ready):
            m.d.sync += last_a.eq(self.bus.a)

        # Does the A bus fire in this cycle
        a_fire = self.bus.a.valid & self.bus.a.ready

        # Connect the read port
        m.d.comb += [
            read_port.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
            read_port.en.eq(a_fire),
        ]

        # Only create and connect the write port if the memory is not read only
        if not self.read_only:
            m.submodules.write_port = write_port = memory.write_port(granularity=8)

            # Connect the write port
            m.d.comb += [
                write_port.addr.eq(self.bus.a.address[self.bus.addr_local_width:]),
                write_port.data.eq(self.bus.a.data),
            ]
            we = self.bus.a.opcode.matches(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData)
            for i in range(self.data_width):
                m.d.comb += write_port.en[i].eq(a_fire & we & self.bus.a.mask[i])

        # Determine the ready of the input bus
        m.d.comb += self.bus.a.ready.eq(~self.bus.d.valid | self.bus.d.ready)

        # If channel A fired last cycle channel D is valid this cycle
        with m.If(last_a.ready):
            m.d.comb += self.bus.d.valid.eq(last_a.valid)

        # Assign the result messages
        with m.Switch(last_a.opcode):
            with m.Case(tilelink.ChannelAOpcode.Get):
                m.d.comb += self.bus.tilelink_access_ack_data(data=read_port.data, size=last_a.size, source=last_a.source)
            with m.Case(tilelink.ChannelAOpcode.PutFullData, tilelink.ChannelAOpcode.PutPartialData):
                m.d.comb += self.bus.tilelink_access_ack(size=last_a.size, source=last_a.source)

        return m
