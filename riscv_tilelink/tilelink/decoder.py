from amaranth import *
from amaranth.utils import log2_int
from amaranth_soc.memory import MemoryMap

from riscv_tilelink import tilelink


class RoundRobin(Elaboratable):
    def __init__(self, count):
        self.count = count
        self.requests = Signal(unsigned(count))
        self.grant = Signal(unsigned(count))

    def elaborate(self, platform):
        m = Module()

        last_grant = Signal(unsigned(self.count), reset=1)

        double_req = Repl(self.requests, 2)
        double_grant = double_req & ~(double_req - last_grant.rotate_left(1))
        m.d.comb += self.grant.eq(double_grant[:self.count] | double_grant[self.count:])

        with m.If(self.requests.any()):
            m.d.sync += last_grant.eq(self.grant)

        return m


class TilelinkDecoder(Elaboratable):
    def __init__(self, addr_width, data_width=4, source_id_width=0):
        self.addr_width = addr_width
        self.data_width = data_width
        self.source_id_width = source_id_width

        self._map = MemoryMap(addr_width=addr_width, data_width=8, alignment=log2_int(data_width))
        self._subs = dict()
        self._bus = None

    @property
    def bus(self):
        if self._bus is None:
            self._map.freeze()
            self._bus = tilelink.Interface(
                addr_width=self.addr_width, data_width=self.data_width,
                source_id_width=self.source_id_width, sink_id_width=0
            )
            self._bus.memory_map = self._map
        return self._bus

    def add(self, sub_bus, *, addr=None):
        if not isinstance(sub_bus, tilelink.Interface):
            raise TypeError("Subordinate bus must be an instance of tilelink.Interface, not {!r}"
                            .format(sub_bus))
        if sub_bus.data_width != self.data_width:
            raise ValueError("Subordinate bus has data width {}, which is not the same as decoder data width {}"
                                .format(sub_bus.data_width, self.data_width))

        self._subs[sub_bus.memory_map] = sub_bus
        return self._map.add_window(sub_bus.memory_map, addr=addr)

    def elaborate(self, platform):
        m = Module()

        # Connect channel A to the master that was selected
        m.d.comb += self.bus.a.ready.eq(0)
        with m.Switch(self.bus.a.address):
            for sub_map, (sub_pat, _) in self._map.window_patterns():
                sub_bus = self._subs[sub_map]
                m.d.comb += sub_bus.a.valid.eq(0)
                with m.Case(sub_pat):
                    m.d.comb += self.bus.a.connect(sub_bus.a)

        # Create a round robin arbiter
        m.submodules.rr = rr = RoundRobin(count=len(self._subs))
        m.d.comb += rr.requests.eq(Cat(m.d.valid for m in self._subs.values()))

        # Route responses on channel D based on the top part of the source
        m.d.comb += self.bus.d.valid.eq(0)
        for i, sub_bus in enumerate(self._subs.values()):
            m.d.comb += sub_bus.d.ready.eq(0)
            with m.If(rr.grant[i]):
                # Note the order is flipped here, because the FANIN/FANOUT settings are set for the complete bus
                m.d.comb += self.bus.d.connect(sub_bus.d)

        return m
