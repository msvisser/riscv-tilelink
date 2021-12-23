from nmigen import *
from tilelink_soc import TilelinkSOC
from ecp5pll import ECP5PLL


def get_bram_init():
    init = []
    with open("firmware/bram.bin.txt", "r") as infile:
        for line in infile.readlines():
            init.append(int(line, base=16))
    return init


class TilelinkSOCTop(Elaboratable):
    def __init__(self):
        self.main_frequency = 50_000_000

    def elaborate(self, platform):
        m = Module()

        m.domains.sync = cd_sync = ClockDomain("sync")
        in_clk = platform.request(platform.default_clk, 0)
        # rst = platform.request(platform.default_rst, 0)
        rst = C(0)

        m.submodules.pll = pll = ECP5PLL()
        pll.register_clkin(in_clk, platform.default_clk_frequency)
        pll.create_clkout(cd_sync, self.main_frequency)

        m.d.comb += [
            pll.reset.eq(rst),
            ResetSignal("sync").eq(~pll.locked | rst),
        ]

        platform.add_clock_constraint(cd_sync.clk, self.main_frequency)

        m.submodules.soc = soc = TilelinkSOC(firmware="firmware/csr.bin")
        led = platform.request('led', 0)
        m.d.comb += led.eq(soc.sim_output_valid)

        return m


if __name__ == "__main__":
    from nmigen_boards.ulx3s import ULX3S_25F_Platform
    ULX3S_25F_Platform().build(TilelinkSOCTop(), do_program=False, synth_opts='-abc9')
