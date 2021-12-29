from amaranth import *
from riscv_tilelink import tilelink
from riscv_tilelink.tilelink.bus import ChannelAOpcode, ChannelDOpcode

class TilelinkPartialWriteAdapter(Elaboratable):
    def __init__(self, addr_width, data_width=4, source_id_width=0):
        # Determine the link parameters
        self.addr_width = addr_width
        self.data_width = data_width

        # Create the link and memory map
        self.in_bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)
        self.out_bus = tilelink.Interface(addr_width=addr_width, data_width=data_width, source_id_width=source_id_width, sink_id_width=0)

        # Determine the memory sizing
        self.data_width_bits = 8 * data_width

    def elaborate(self, platform):
        m = Module()

        m.d.comb += self.in_bus.connect(self.out_bus)

        state = Signal(unsigned(2))
        prev_a = Record.like(self.in_bus.a)

        with m.If(state == 0):
            # Check if the requested operation is a write with a partial mask
            with m.If(self.in_bus.a.opcode.matches(ChannelAOpcode.PutFullData, ChannelAOpcode.PutPartialData) & (~self.in_bus.a.mask.all())):
                # Override the opcode, size and mask
                m.d.comb += [
                    self.out_bus.a.opcode.eq(ChannelAOpcode.Get),
                    self.out_bus.a.size.eq(2),
                    self.out_bus.a.mask.eq(0b1111),
                ]

                # If the changed request is accepted, switch to the next state
                with m.If(self.in_bus.a.valid & self.in_bus.a.ready):
                    m.d.sync += [
                        state.eq(1),
                        prev_a.eq(self.in_bus.a),
                    ]
        with m.Elif(state == 1):
            # Temporarily halt the A channel, by showing not ready on the input and not valid on the output
            m.d.comb += [
                self.in_bus.a.ready.eq(0),
                self.out_bus.a.valid.eq(0),
            ]

            # Override the A channel on the output using the original request, with the size and mask set to full
            m.d.comb += [
                self.out_bus.a.opcode.eq(prev_a.opcode),
                self.out_bus.a.param.eq(prev_a.param),
                self.out_bus.a.size.eq(2),
                self.out_bus.a.source.eq(prev_a.source),
                self.out_bus.a.address.eq(prev_a.address),
                self.out_bus.a.mask.eq(0b1111),
                self.out_bus.a.corrupt.eq(prev_a.corrupt),
            ]

            # Override the A channel data with parts of the original request and parts of the response data
            for i in range(self.data_width):
                with m.If(prev_a.mask[i]):
                    m.d.comb += self.out_bus.a.data.word_select(i, 8).eq(prev_a.data.word_select(i, 8))
                with m.Else():
                    m.d.comb += self.out_bus.a.data.word_select(i, 8).eq(self.out_bus.d.data.word_select(i, 8))

            # Check if the current response matches the expected response
            with m.If(self.out_bus.d.valid & (self.out_bus.d.opcode == ChannelDOpcode.AccessAckData) & (self.out_bus.d.source == prev_a.source)):
                # Force accept the response from the output bus, while not sending it to the input bus
                m.d.comb += [
                    self.out_bus.d.ready.eq(1),
                    self.in_bus.d.valid.eq(0),
                ]

                # Mark the modified write request as valid
                m.d.comb += self.out_bus.a.valid.eq(1)

                # Switch to the next state
                m.d.sync += state.eq(2)
        with m.If(state == 2):
            # Temporarily halt the A channel, by showing not ready on the input and not valid on the output
            m.d.comb += [
                self.in_bus.a.ready.eq(0),
                self.out_bus.a.valid.eq(0),
            ]

            # Check if the response should have its size corrected
            with m.If(self.out_bus.d.valid & (self.out_bus.d.opcode == ChannelDOpcode.AccessAck) & (self.out_bus.d.source == prev_a.source)):
                # Change the request size to that of the original request
                m.d.comb += self.in_bus.d.size.eq(prev_a.size)
                m.d.sync += state.eq(0)

        return m
