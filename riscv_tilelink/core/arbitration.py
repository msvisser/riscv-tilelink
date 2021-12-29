from enum import Enum, unique

from amaranth import *


@unique
class ArbitrationState(Enum):
    INVALID = 0
    FIRING = 1
    HALTED = 2


class Arbitration(Record):
    def __init__(self, *, name=None, fields=None, src_loc_at=0):
        layout = [
            ("valid", 1),
            ("halted", 1),
            ("halted_by_self", 1),
            ("halted_by_next", 1),
            ("remove", 1),
            ("state", ArbitrationState),
        ]
        super().__init__(layout, name=name, fields=fields, src_loc_at=src_loc_at + 1)

    def elaborate(self, m, prev_arbitration=None):
        m.d.comb += self.halted.eq(self.halted_by_self | self.halted_by_next)

        with m.If(~self.halted | self.remove):
            m.d.sync += self.valid.eq(0)
        if prev_arbitration is not None:
            m.d.comb += prev_arbitration.halted_by_next.eq(self.halted)
            with m.If(~prev_arbitration.halted & ~prev_arbitration.remove):
                m.d.sync += self.valid.eq(prev_arbitration.valid)
        else:
            m.d.sync += self.valid.eq(1)

        # Debug state output
        with m.If(~self.valid):
            m.d.comb += self.state.eq(ArbitrationState.INVALID)
        with m.Else():
            with m.If(self.halted):
                m.d.comb += self.state.eq(ArbitrationState.HALTED)
            with m.Else():
                m.d.comb += self.state.eq(ArbitrationState.FIRING)

    @property
    def firing(self):
        return self.valid & ~self.halted & ~self.remove

    @property
    def moving(self):
        return ~self.halted & ~self.remove
