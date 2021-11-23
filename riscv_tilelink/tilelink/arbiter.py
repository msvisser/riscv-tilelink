from nmigen import *
from nmigen.lib.scheduler import RoundRobin
from nmigen.utils import log2_int

from riscv_tilelink import tilelink


class TilelinkArbiter(Elaboratable):
    def __init__(self, masters):
        # The output address width is the maximum of all incomming links
        self.addr_width = max(map(lambda m: m.addr_width, masters))
        # The data width should be equal for all incomming links
        data_widths = list(map(lambda m: m.data_width, masters))
        if not all(w == data_widths[0] for w in data_widths):
            raise ValueError("All master busses should have the same data width")
        self.data_width = data_widths[0]
        self.data_width_bits = 8 * self.data_width
        # The source id width is the maximum of all incomming links plus the
        # number of bits required to differentiate between the incomming masters
        self.source_id_in_width = max(map(lambda m: m.source_id_width, masters))
        self.source_id_extra_width = log2_int(len(masters), need_pow2=False)
        self.source_id_width = self.source_id_in_width + self.source_id_extra_width
        # The sink id width is the minimum of what all the incomming links accept
        self.sink_id_width = min(map(lambda m: m.sink_id_width, masters))

        # Store the master busses
        self.masters = masters

        # Create the bus interface
        self.bus = tilelink.Interface(addr_width=self.addr_width, data_width=self.data_width, source_id_width=self.source_id_width, sink_id_width=self.sink_id_width)

    def elaborate(self, platform):
        m = Module()

        arb_width = len(self.masters)

        # Create a round robin arbiter
        m.submodules.rr = rr = RoundRobin(count=arb_width)
        m.d.comb += rr.requests.eq(Cat(m.a.valid for m in self.masters))

        # Connect channel A to the master that was selected
        m.d.comb += self.bus.a.valid.eq(0)
        for i, master in enumerate(self.masters):
            m.d.comb += master.a.ready.eq(0)
            with m.If(rr.grant == i):
                # Make sure the original source length is correct
                original_source = master.a.source | C(0, self.source_id_in_width)
                m.d.comb += [
                    self.bus.a.opcode.eq(master.a.opcode),
                    self.bus.a.param.eq(master.a.param),
                    self.bus.a.size.eq(master.a.size),
                    self.bus.a.source.eq(Cat(original_source, C(i, self.source_id_extra_width))),
                    self.bus.a.address.eq(master.a.address),
                    self.bus.a.mask.eq(master.a.mask),
                    self.bus.a.data.eq(master.a.data),
                    self.bus.a.corrupt.eq(master.a.corrupt),
                    self.bus.a.valid.eq(master.a.valid),
                    master.a.ready.eq(self.bus.a.ready),
                ]

        # Route responses on channel D based on the top part of the source
        d_selector = self.bus.d.source[-self.source_id_extra_width:]
        m.d.comb += self.bus.d.ready.eq(0)
        for i, master in enumerate(self.masters):
            m.d.comb += master.d.valid.eq(0)
            with m.If(d_selector == i):
                m.d.comb += [
                    master.d.opcode.eq(self.bus.d.opcode),
                    master.d.param.eq(self.bus.d.param),
                    master.d.size.eq(self.bus.d.size),
                    master.d.source.eq(self.bus.d.source),
                    master.d.sink.eq(self.bus.d.sink),
                    master.d.denied.eq(self.bus.d.denied),
                    master.d.corrupt.eq(self.bus.d.corrupt),
                    master.d.data.eq(self.bus.d.data),
                    master.d.valid.eq(self.bus.d.valid),
                    self.bus.d.ready.eq(master.d.ready),
                ]

        return m
