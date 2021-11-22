#include "tilelink_soc.h"

#if defined(CXXRTL_INCLUDE_CAPI_IMPL) || \
    defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_capi.cc>
#endif

#if defined(CXXRTL_INCLUDE_VCD_CAPI_IMPL)
#include <backends/cxxrtl/cxxrtl_vcd_capi.cc>
#endif

using namespace cxxrtl_yosys;

namespace cxxrtl_design {

bool p_top::eval() {
	bool converged = true;
	bool posedge_p_clk = this->posedge_p_clk();
	value<2> i_procmux_24_53739__CMP;
	value<2> i_procmux_24_53738__CMP;
	value<2> i_procmux_24_53724__CMP;
	value<3> i_procmux_24_53694__CMP;
	value<3> i_procmux_24_53693__CMP;
	value<1> i_procmux_24_53329__Y;
	value<5> i_procmux_24_52939__Y;
	value<32> i_procmux_24_52936__Y;
	value<32> i_procmux_24_52933__Y;
	value<1> i_procmux_24_52042__Y;
	value<1> i_procmux_24_51883__Y;
	value<2> i_procmux_24_51817__CMP;
	value<2> i_procmux_24_51800__CMP;
	value<2> i_procmux_24_51783__CMP;
	value<2> i_procmux_24_51766__CMP;
	value<2> i_procmux_24_51704__CMP;
	value<2> i_procmux_24_51687__CMP;
	value<2> i_procmux_24_51542__Y;
	value<2> i_procmux_24_51543__CMP;
	value<13> i_procmux_24_51463__Y;
	value<32> i_procmux_24_51460__Y;
	value<32> i_procmux_24_51457__Y;
	value<13> i_procmux_24_51454__Y;
	value<32> i_procmux_24_51451__Y;
	value<32> i_procmux_24_51448__Y;
	value<13> i_procmux_24_51445__Y;
	value<32> i_procmux_24_51442__Y;
	value<32> i_procmux_24_51439__Y;
	value<13> i_procmux_24_51436__Y;
	value<32> i_procmux_24_51433__Y;
	value<32> i_procmux_24_51430__Y;
	value<2> i_procmux_24_51283__Y;
	value<2> i_procmux_24_51284__CMP;
	// \hdlname: tl_rom_arbiter bus__a__address
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<15> p_tl__rom__arbiter_2e_bus____a____address;
	// \hdlname: tl_rom_arbiter bus__a__valid
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<1> p_tl__rom__arbiter_2e_bus____a____valid;
	// \hdlname: tl_rom_arbiter bus__d__source
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<2> p_tl__rom__arbiter_2e_bus____d____source;
	// \hdlname: tl_rom_arbiter rr_grant
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__rom__arbiter_2e_rr__grant;
	// \hdlname: tl_rom_arbiter tl_data_rom__d__valid
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:42
	value<1> p_tl__rom__arbiter_2e_tl__data__rom____d____valid;
	// \hdlname: tl_rom_arbiter tl_instr_rom__d__valid
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:40
	value<1> p_tl__rom__arbiter_2e_tl__instr__rom____d____valid;
	// \hdlname: tl_rom_arbiter rr rst
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:25815.10-25820.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_rom_arbiter rr requests
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:25815.10-25820.4
	value<2> p_tl__rom__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_rom_arbiter rr clk
	// \src: tilelink_soc.v:27309.18-27369.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:25815.10-25820.4
	value<1> p_tl__rom__arbiter_2e_rr_2e_clk;
	// \hdlname: tl_rom bus__a__ready
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____a____ready;
	// \hdlname: tl_rom bus__d__data
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<32> p_tl__rom_2e_bus____d____data;
	// \hdlname: tl_rom bus__d__source
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<2> p_tl__rom_2e_bus____d____source;
	// \hdlname: tl_rom bus__d__valid
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<1> p_tl__rom_2e_bus____d____valid;
	// \hdlname: tl_rom clk
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_clk;
	// \hdlname: tl_rom rst
	// \src: tilelink_soc.v:27286.10-27308.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__rom_2e_rst;
	// \src: tilelink_soc.v:27286.10-27308.4|tilelink_soc.v:25329.14-25329.20
	value<32> i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_25329_24_34574__DATA;
	// \src: tilelink_soc.v:27286.10-27308.4|tilelink_soc.v:25335.17-25335.125
	value<1> i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y;
	// \hdlname: tl_ram_arbiter bus__a__address
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<15> p_tl__ram__arbiter_2e_bus____a____address;
	// \hdlname: tl_ram_arbiter bus__a__data
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<32> p_tl__ram__arbiter_2e_bus____a____data;
	// \hdlname: tl_ram_arbiter bus__a__mask
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<4> p_tl__ram__arbiter_2e_bus____a____mask;
	// \hdlname: tl_ram_arbiter bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<3> p_tl__ram__arbiter_2e_bus____a____opcode;
	// \hdlname: tl_ram_arbiter bus__a__valid
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<1> p_tl__ram__arbiter_2e_bus____a____valid;
	// \hdlname: tl_ram_arbiter bus__d__source
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink/arbiter.py:30
	value<2> p_tl__ram__arbiter_2e_bus____d____source;
	// \hdlname: tl_ram_arbiter rr_grant
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:42
	value<1> p_tl__ram__arbiter_2e_rr__grant;
	// \hdlname: tl_ram_arbiter tl_data_ram__d__valid
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:43
	value<1> p_tl__ram__arbiter_2e_tl__data__ram____d____valid;
	// \hdlname: tl_ram_arbiter tl_instr_ram__d__valid
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:41
	value<1> p_tl__ram__arbiter_2e_tl__instr__ram____d____valid;
	// \hdlname: tl_ram_arbiter rr rst
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:16637.10-16642.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_rst;
	// \hdlname: tl_ram_arbiter rr requests
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/lib/scheduler.py:41|tilelink_soc.v:16637.10-16642.4
	value<2> p_tl__ram__arbiter_2e_rr_2e_requests;
	// \hdlname: tl_ram_arbiter rr clk
	// \src: tilelink_soc.v:27225.18-27285.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524|tilelink_soc.v:16637.10-16642.4
	value<1> p_tl__ram__arbiter_2e_rr_2e_clk;
	// \hdlname: tl_ram bus__a__mask
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<4> p_tl__ram_2e_bus____a____mask;
	// \hdlname: tl_ram bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<3> p_tl__ram_2e_bus____a____opcode;
	// \hdlname: tl_ram bus__a__ready
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____a____ready;
	// \hdlname: tl_ram bus__a__valid
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____a____valid;
	// \hdlname: tl_ram bus__d__data
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<32> p_tl__ram_2e_bus____d____data;
	// \hdlname: tl_ram bus__d__source
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<2> p_tl__ram_2e_bus____d____source;
	// \hdlname: tl_ram bus__d__valid
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:18
	value<1> p_tl__ram_2e_bus____d____valid;
	// \hdlname: tl_ram clk
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_clk;
	// \hdlname: tl_ram memory_w_en
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:62
	value<4> p_tl__ram_2e_memory__w__en;
	// \hdlname: tl_ram rst
	// \src: tilelink_soc.v:27202.10-27224.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__ram_2e_rst;
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16121.14-16121.20
	value<32> i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_16121_24_9859__DATA;
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16150.18-16150.127
	value<1> i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y;
	// \hdlname: tl_periph $11
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_11;
	// \hdlname: tl_periph $110
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_110;
	// \hdlname: tl_periph $158
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_158;
	// \hdlname: tl_periph $23
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_23;
	// \hdlname: tl_periph $35
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_35;
	// \hdlname: tl_periph $47
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_47;
	// \hdlname: tl_periph $62
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_62;
	// \hdlname: tl_periph $74
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_74;
	// \hdlname: tl_periph $86
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_86;
	// \hdlname: tl_periph $98
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:36
	value<1> p_tl__periph_2e__24_98;
	// \hdlname: tl_periph bus__a__address
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<4> p_tl__periph_2e_bus____a____address;
	// \hdlname: tl_periph bus__a__mask
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<4> p_tl__periph_2e_bus____a____mask;
	// \hdlname: tl_periph bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<3> p_tl__periph_2e_bus____a____opcode;
	// \hdlname: tl_periph bus__a__ready
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<1> p_tl__periph_2e_bus____a____ready;
	// \hdlname: tl_periph bus__a__valid
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<1> p_tl__periph_2e_bus____a____valid;
	// \hdlname: tl_periph clk
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_clk;
	// \hdlname: tl_periph rst
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_tl__periph_2e_rst;
	// \src: tilelink_soc.v:27178.13-27201.4|tilelink_soc.v:7227.19-7227.133
	value<1> i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_7227_24_1484__Y;
	// \src: tilelink_soc.v:27178.13-27201.4|tilelink_soc.v:7247.18-7247.128
	value<65> i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y;
	// \src: tilelink_soc.v:27178.13-27201.4|tilelink_soc.v:7298.3-7350.6
	value<1> i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1547;
	// \src: tilelink_soc.v:27178.13-27201.4|tilelink_soc.v:7298.3-7350.6
	value<1> i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1549;
	// \src: tilelink_soc.v:27178.13-27201.4|tilelink_soc.v:7298.3-7350.6
	value<1> i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1551;
	// \hdlname: tl_instr_decoder _bus__a__address
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____a____address;
	// \hdlname: tl_instr_decoder _bus__d__data
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:42
	value<32> p_tl__instr__decoder_2e___bus____d____data;
	// \hdlname: tl_instr_decoder rr_grant
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:11
	value<2> p_tl__instr__decoder_2e_rr__grant;
	// \hdlname: tl_instr_decoder tl_instr_ram__a__valid
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:41
	value<1> p_tl__instr__decoder_2e_tl__instr__ram____a____valid;
	// \hdlname: tl_instr_decoder tl_instr_rom__a__valid
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:40
	value<1> p_tl__instr__decoder_2e_tl__instr__rom____a____valid;
	// \src: tilelink_soc.v:27117.20-27177.4|tilelink_soc.v:5206.18-5206.117|tilelink_soc.v:6490.6-6495.4
	value<3> i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5206_24_1303__Y;
	// \hdlname: tl_instr_decoder rr requests
	// \src: tilelink_soc.v:27117.20-27177.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:10|tilelink_soc.v:6490.6-6495.4
	value<2> p_tl__instr__decoder_2e_rr_2e_requests;
	// \hdlname: tl_data_decoder _bus__a__address
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____a____address;
	// \hdlname: tl_data_decoder _bus__d__data
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:42
	value<32> p_tl__data__decoder_2e___bus____d____data;
	// \hdlname: tl_data_decoder bus__a__data
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<32> p_tl__data__decoder_2e_bus____a____data;
	// \hdlname: tl_data_decoder bus__a__size
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<2> p_tl__data__decoder_2e_bus____a____size;
	// \hdlname: tl_data_decoder bus__a__source
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<1> p_tl__data__decoder_2e_bus____a____source;
	// \hdlname: tl_data_decoder bus__a__valid
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:12
	value<1> p_tl__data__decoder_2e_bus____a____valid;
	// \hdlname: tl_data_decoder rr_grant
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:11
	value<3> p_tl__data__decoder_2e_rr__grant;
	// \hdlname: tl_data_decoder tl_data_ram__a__valid
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:43
	value<1> p_tl__data__decoder_2e_tl__data__ram____a____valid;
	// \hdlname: tl_data_decoder tl_data_rom__a__valid
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink_soc.py:42
	value<1> p_tl__data__decoder_2e_tl__data__rom____a____valid;
	// \src: tilelink_soc.v:27039.19-27116.4|tilelink_soc.v:5275.18-5275.117|tilelink_soc.v:5703.10-5708.4
	value<4> i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5275_24_1318__Y;
	// \hdlname: tl_data_decoder rr requests
	// \src: tilelink_soc.v:27039.19-27116.4|/home/michiel/development/riscv-tilelink/tilelink/decoder.py:10|tilelink_soc.v:5703.10-5708.4
	value<3> p_tl__data__decoder_2e_rr_2e_requests;
	// \hdlname: instruction_master $19
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:70
	value<1> p_instruction__master_2e__24_19;
	// \hdlname: instruction_master $21
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:84
	value<1> p_instruction__master_2e__24_21;
	// \hdlname: instruction_master $23
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_23;
	// \hdlname: instruction_master $25
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:95
	value<1> p_instruction__master_2e__24_25;
	// \hdlname: instruction_master $27
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:102
	value<1> p_instruction__master_2e__24_27;
	// \hdlname: instruction_master $38
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_38;
	// \hdlname: instruction_master $42
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:93
	value<1> p_instruction__master_2e__24_42;
	// \hdlname: instruction_master bus__a__ready
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____ready;
	// \hdlname: instruction_master bus__a__valid
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____a____valid;
	// \hdlname: instruction_master bus__d__source
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____source;
	// \hdlname: instruction_master bus__d__valid
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:29
	value<1> p_instruction__master_2e_bus____d____valid;
	// \hdlname: instruction_master clk
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_clk;
	// \hdlname: instruction_master req_valid
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/core/records.py:10
	value<1> p_instruction__master_2e_req__valid;
	// \hdlname: instruction_master rsp_data
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/core/records.py:10
	value<32> p_instruction__master_2e_rsp__data;
	// \hdlname: instruction_master rsp_ready
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/core/records.py:10
	value<1> p_instruction__master_2e_rsp__ready;
	// \hdlname: instruction_master rsp_valid
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/core/records.py:10
	value<1> p_instruction__master_2e_rsp__valid;
	// \hdlname: instruction_master rst
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_instruction__master_2e_rst;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1240;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<2> i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1241;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1242;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1243;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<2> i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:4968.3-5064.6
	value<32> i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:5080.3-5101.6
	value<1> i_flatten_5c_instruction__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:27016.22-27038.4|tilelink_soc.v:5102.3-5123.6
	value<32> i_flatten_5c_instruction__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_;
	// \hdlname: data_master $18
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_18;
	// \hdlname: data_master $20
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_20;
	// \hdlname: data_master $22
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_22;
	// \hdlname: data_master $24
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_24;
	// \hdlname: data_master $26
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_26;
	// \hdlname: data_master $276
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_276;
	// \hdlname: data_master $28
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	value<1> p_data__master_2e__24_28;
	// \hdlname: data_master $30
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_30;
	// \hdlname: data_master $32
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:125
	value<1> p_data__master_2e__24_32;
	// \hdlname: data_master $34
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_34;
	// \hdlname: data_master $342
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_342;
	// \hdlname: data_master $344
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_344;
	// \hdlname: data_master $346
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_346;
	// \hdlname: data_master $36
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:164
	value<1> p_data__master_2e__24_36;
	// \hdlname: data_master $41
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_41;
	// \hdlname: data_master $44
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_44;
	// \hdlname: data_master $47
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	value<1> p_data__master_2e__24_47;
	// \hdlname: data_master $58
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_58;
	// \hdlname: data_master $64
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_64;
	// \hdlname: data_master $74
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_74;
	// \hdlname: data_master $76
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_76;
	// \hdlname: data_master $78
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_78;
	// \hdlname: data_master $80
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:134
	value<1> p_data__master_2e__24_80;
	// \hdlname: data_master $82
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	value<1> p_data__master_2e__24_82;
	// \hdlname: data_master addr_local_bits
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:138
	value<2> p_data__master_2e_addr__local__bits;
	// \hdlname: data_master bus__a__address
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____address;
	// \hdlname: data_master bus__a__data
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____a____data;
	// \hdlname: data_master bus__a__mask
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<4> p_data__master_2e_bus____a____mask;
	// \hdlname: data_master bus__a__opcode
	// \enum_value_111: AcquirePerm
	// \enum_value_110: AcquireBlock
	// \enum_value_101: Intent
	// \enum_value_100: Get
	// \enum_value_011: LogicalData
	// \enum_value_010: ArithmeticData
	// \enum_value_001: PutPartialData
	// \enum_value_000: PutFullData
	// \enum_base_type: ChannelAOpcode
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<3> p_data__master_2e_bus____a____opcode;
	// \hdlname: data_master bus__a__ready
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____ready;
	// \hdlname: data_master bus__a__size
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<2> p_data__master_2e_bus____a____size;
	// \hdlname: data_master bus__a__source
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____source;
	// \hdlname: data_master bus__a__valid
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____a____valid;
	// \hdlname: data_master bus__d__data
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<32> p_data__master_2e_bus____d____data;
	// \hdlname: data_master bus__d__source
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____source;
	// \hdlname: data_master bus__d__valid
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:31
	value<1> p_data__master_2e_bus____d____valid;
	// \hdlname: data_master clk
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_clk;
	// \hdlname: data_master is_unsigned
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:137
	value<1> p_data__master_2e_is__unsigned;
	// \hdlname: data_master read_data
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:135
	value<32> p_data__master_2e_read__data;
	// \hdlname: data_master req_addr
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<32> p_data__master_2e_req__addr;
	// \hdlname: data_master req_size
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<2> p_data__master_2e_req__size;
	// \hdlname: data_master req_size$73
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:136
	value<2> p_data__master_2e_req__size_24_73;
	// \hdlname: data_master req_valid
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<1> p_data__master_2e_req__valid;
	// \hdlname: data_master req_we
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<1> p_data__master_2e_req__we;
	// \hdlname: data_master rsp_ready
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<1> p_data__master_2e_rsp__ready;
	// \hdlname: data_master rsp_valid
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/core/records.py:27
	value<1> p_data__master_2e_rsp__valid;
	// \hdlname: data_master rst
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_data__master_2e_rst;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3700.3-3772.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1083;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3700.3-3772.6
	value<2> i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1084;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3700.3-3772.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3700.3-3772.6
	value<2> i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3877.3-3898.6
	value<1> i_flatten_5c_data__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:3899.3-3920.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:4145.3-4196.6
	value<32> i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:4145.3-4196.6
	value<32> i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_;
	// \src: tilelink_soc.v:26988.15-27015.4|tilelink_soc.v:4145.3-4196.6
	value<32> i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_;
	// \hdlname: core $191
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:52
	value<1> p_core_2e__24_191;
	// \hdlname: core $272
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:26
	value<1> p_core_2e__24_272;
	// \hdlname: core $40
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:26
	value<1> p_core_2e__24_40;
	// \hdlname: core $509
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:335
	value<1> p_core_2e__24_509;
	// \hdlname: core $511
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:345
	value<1> p_core_2e__24_511;
	// \hdlname: core $559
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:335
	value<1> p_core_2e__24_559;
	// \hdlname: core $561
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:345
	value<1> p_core_2e__24_561;
	// \hdlname: core $609
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:335
	value<1> p_core_2e__24_609;
	// \hdlname: core $611
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:352
	value<1> p_core_2e__24_611;
	// \hdlname: core $659
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:335
	value<1> p_core_2e__24_659;
	// \hdlname: core $661
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:352
	value<1> p_core_2e__24_661;
	// \hdlname: core a_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_a__arbitration____halted;
	// \hdlname: core a_arbitration__remove
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_a__arbitration____remove;
	// \hdlname: core clk
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_clk;
	// \hdlname: core d_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_d__arbitration____halted;
	// \hdlname: core d_arbitration__halted_by_next
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_d__arbitration____halted__by__next;
	// \hdlname: core d_arbitration__remove
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_d__arbitration____remove;
	// \hdlname: core f_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_f__arbitration____halted;
	// \hdlname: core f_arbitration__halted_by_next
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_f__arbitration____halted__by__next;
	// \hdlname: core f_arbitration__remove
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_f__arbitration____remove;
	// \hdlname: core m_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_m__arbitration____halted;
	// \hdlname: core m_arbitration__halted_by_next
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_m__arbitration____halted__by__next;
	// \hdlname: core register_file_w_en
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:321
	value<1> p_core_2e_register__file__w__en;
	// \hdlname: core rs1
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51
	value<5> p_core_2e_rs1;
	// \hdlname: core rs2
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51
	value<5> p_core_2e_rs2;
	// \hdlname: core rst
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/.env/lib/python3.9/site-packages/nmigen/hdl/ir.py:524
	value<1> p_core_2e_rst;
	// \hdlname: core w_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_w__arbitration____halted;
	// \hdlname: core w_write_data
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:311
	value<32> p_core_2e_w__write__data;
	// \hdlname: core x_alu_left
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:143
	value<32> p_core_2e_x__alu__left;
	// \hdlname: core x_alu_result
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:163
	value<32> p_core_2e_x__alu__result;
	// \hdlname: core x_alu_right
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:144
	value<32> p_core_2e_x__alu__right;
	// \hdlname: core x_arbitration__halted
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_x__arbitration____halted;
	// \hdlname: core x_arbitration__remove
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/arbitration.py:23
	value<1> p_core_2e_x__arbitration____remove;
	// \hdlname: core x_muldiv_intermediate
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:191
	value<64> p_core_2e_x__muldiv__intermediate;
	// \hdlname: core x_rs1_value
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:135
	value<32> p_core_2e_x__rs1__value;
	// \hdlname: core x_rs2_value
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:136
	value<32> p_core_2e_x__rs2__value;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1357.14-1357.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1357_24_42__DATA;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1360.14-1360.27
	value<32> i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1360_24_43__DATA;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1417.19-1417.152
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1417_24_96__Y;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1419.19-1419.152
	value<32> i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1419_24_98__Y;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1445.19-1445.158
	value<1> i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1492.19-1492.129
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y;
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1496.19-1496.105
	value<1> i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y;
	// \hdlname: core decoder writeback_select
	// \enum_value_10: MUL
	// \enum_value_01: MEMORY
	// \enum_value_00: ALU
	// \enum_base_type: WritebackSelect
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<2> p_core_2e_decoder_2e_writeback__select;
	// \hdlname: core decoder register_write
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_register__write;
	// \hdlname: core decoder rd
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<5> p_core_2e_decoder_2e_rd;
	// \hdlname: core decoder mem_we
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_mem__we;
	// \hdlname: core decoder mem_unsigned
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_mem__unsigned;
	// \hdlname: core decoder mem_size
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<2> p_core_2e_decoder_2e_mem__size;
	// \hdlname: core decoder mem_enable
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_mem__enable;
	// \hdlname: core decoder instruction
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:77|tilelink_soc.v:1774.11-1792.4
	value<32> p_core_2e_decoder_2e_instruction;
	// \hdlname: core decoder immediate
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<32> p_core_2e_decoder_2e_immediate;
	// \hdlname: core decoder branch_type
	// \enum_value_1: REG_REL
	// \enum_value_0: PC_REL
	// \enum_base_type: BranchType
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_branch__type;
	// \hdlname: core decoder branch_mode
	// \enum_value_11: COND_ONE
	// \enum_value_10: COND_ZERO
	// \enum_value_01: ALWAYS
	// \enum_value_00: NEVER
	// \enum_base_type: BranchMode
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<2> p_core_2e_decoder_2e_branch__mode;
	// \hdlname: core decoder alu_right_select
	// \enum_value_10: FOUR
	// \enum_value_01: IMM
	// \enum_value_00: RS2
	// \enum_base_type: ALURight
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<2> p_core_2e_decoder_2e_alu__right__select;
	// \hdlname: core decoder alu_operation
	// \enum_value_111: AND
	// \enum_value_110: OR
	// \enum_value_101: SHR
	// \enum_value_100: XOR
	// \enum_value_011: SLTU
	// \enum_value_010: SLT
	// \enum_value_001: SHL
	// \enum_value_000: ADD_SUB
	// \enum_base_type: ALUOperation
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<3> p_core_2e_decoder_2e_alu__operation;
	// \hdlname: core decoder alu_mode_switch
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<1> p_core_2e_decoder_2e_alu__mode__switch;
	// \hdlname: core decoder alu_left_select
	// \enum_value_10: ZERO
	// \enum_value_01: PC
	// \enum_value_00: RS1
	// \enum_base_type: ALULeft
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/decoder.py:51|tilelink_soc.v:1774.11-1792.4
	value<2> p_core_2e_decoder_2e_alu__left__select;
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:81
	// cell $procmux$51543_CMP0
	i_procmux_24_51543__CMP.slice<0>() = logic_not<1>(p_tl__ram_2e_last__a____opcode.curr);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:81
	// cell $procmux$51543_CMP1
	i_procmux_24_51543__CMP.slice<1>() = eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:81
	// cell $procmux$51284_CMP0
	i_procmux_24_51284__CMP.slice<0>() = logic_not<1>(p_tl__rom_2e_last__a____opcode.curr);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:81
	// cell $procmux$51284_CMP1
	i_procmux_24_51284__CMP.slice<1>() = eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x1u});
	// cells $procmux$51542 $procmux$51543_ANY $procmux$51544_CMP0
	i_procmux_24_51542__Y = (reduce_or<1>(i_procmux_24_51543__CMP) ? p_tl__ram_2e_last__a____source.curr : (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e_last__a____source.curr : value<2>{0u}));
	// cells $procmux$51283 $procmux$51284_ANY $procmux$51285_CMP0
	i_procmux_24_51283__Y = (reduce_or<1>(i_procmux_24_51284__CMP) ? p_tl__rom_2e_last__a____source.curr : (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e_last__a____source.curr : value<2>{0u}));
	// connection
	p_tl__ram_2e_bus____d____source = i_procmux_24_51542__Y;
	// connection
	p_tl__rom_2e_bus____d____source = i_procmux_24_51283__Y;
	// connection
	p_tl__ram__arbiter_2e_bus____d____source = p_tl__ram_2e_bus____d____source;
	// connection
	p_tl__rom__arbiter_2e_bus____d____source = p_tl__rom_2e_bus____d____source;
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:77
	// cell $procmux$51528
	p_tl__ram_2e_bus____d____valid = (p_tl__ram_2e_last__a____ready.curr ? p_tl__ram_2e_last__a____valid.curr : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/memory.py:77
	// cell $procmux$51269
	p_tl__rom_2e_bus____d____valid = (p_tl__rom_2e_last__a____ready.curr ? p_tl__rom_2e_last__a____valid.curr : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/arbiter.py:66
	// cell $procmux$51317
	p_tl__ram__arbiter_2e_tl__instr__ram____d____valid = (i_procmux_24_51542__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_bus____d____valid);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/arbiter.py:66
	// cell $procmux$51094
	p_tl__rom__arbiter_2e_tl__instr__rom____d____valid = (i_procmux_24_51283__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____valid);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/arbiter.py:66
	// cell $procmux$51344
	p_tl__ram__arbiter_2e_tl__data__ram____d____valid = (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____valid : value<1>{0u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/arbiter.py:66
	// cell $procmux$51121
	p_tl__rom__arbiter_2e_tl__data__rom____d____valid = (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____valid : value<1>{0u});
	// connection
	p_tl__instr__decoder_2e_rr_2e_requests = p_tl__ram__arbiter_2e_tl__instr__ram____d____valid.concat(p_tl__rom__arbiter_2e_tl__instr__rom____d____valid).val();
	// connection
	p_tl__data__decoder_2e_rr_2e_requests = p_tl__periph_2e_bus____d____valid.curr.concat(p_tl__ram__arbiter_2e_tl__data__ram____d____valid).concat(p_tl__rom__arbiter_2e_tl__data__rom____d____valid).val();
	// cells $flatten\tl_instr_decoder.\rr.$or$tilelink_soc.v:5206$1303 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:5205$1302 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:5204$1301 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:5203$1300 $flatten\tl_instr_decoder.\rr.$and$tilelink_soc.v:5210$1307 $flatten\tl_instr_decoder.\rr.$not$tilelink_soc.v:5209$1306 $flatten\tl_instr_decoder.\rr.$sub$tilelink_soc.v:5208$1305
	i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5206_24_1303__Y = or_uu<3>(and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<1,0>().val(), and_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), not_u<5>(sub_uu<5>(value<1>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_requests).concat(p_tl__instr__decoder_2e_rr_2e_requests).val(), value<3>{0u}.concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<0>()).concat(p_tl__instr__decoder_2e_rr_2e_last__grant.curr.slice<1>()).val()))).slice<4,2>().val());
	// cells $flatten\tl_data_decoder.\rr.$or$tilelink_soc.v:5275$1318 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:5274$1317 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:5273$1316 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:5272$1315 $flatten\tl_data_decoder.\rr.$and$tilelink_soc.v:5279$1322 $flatten\tl_data_decoder.\rr.$not$tilelink_soc.v:5278$1321 $flatten\tl_data_decoder.\rr.$sub$tilelink_soc.v:5277$1320
	i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5275_24_1318__Y = or_uu<4>(and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<2,0>().val(), and_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), not_u<7>(sub_uu<7>(value<1>{0u}.concat(p_tl__data__decoder_2e_rr_2e_requests).concat(p_tl__data__decoder_2e_rr_2e_requests).val(), value<4>{0u}.concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<1,0>()).concat(p_tl__data__decoder_2e_rr_2e_last__grant.curr.slice<2>()).val()))).slice<6,3>().val());
	// connection
	p_tl__instr__decoder_2e_rr__grant = i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5206_24_1303__Y.slice<1,0>().val();
	// connection
	p_tl__data__decoder_2e_rr__grant = i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5275_24_1318__Y.slice<2,0>().val();
	// connection
	p_data__master_2e_bus____a____address = p_core_2e_m__alu__result.curr;
	// connection
	p_tl__ram__arbiter_2e_rr__grant = p_tl__ram__arbiter_2e_rr_2e_grant.curr;
	// connection
	p_tl__rom__arbiter_2e_rr__grant = p_tl__rom__arbiter_2e_rr_2e_grant.curr;
	// cells $procmux$52042 $procmux$52045 $procmux$51356 $procmux$52048 $procmux$51133
	i_procmux_24_52042__Y = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____source.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____source.slice<0>().val() : value<1>{0u}) : value<1>{0u})));
	// cells $procmux$51883 $procmux$51329 $procmux$51886 $procmux$51106
	i_procmux_24_51883__Y = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_51542__Y.slice<1>().val() ? value<1>{0u} : p_tl__ram_2e_bus____d____source.slice<0>().val()) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_51283__Y.slice<1>().val() ? value<1>{0u} : p_tl__rom_2e_bus____d____source.slice<0>().val()) : value<1>{0u}));
	// cells $procmux$51293 $procmux$51294_CMP0
	p_tl__rom_2e_bus____d____data = (eq_uu<1>(p_tl__rom_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__rom_2e___0__.curr : value<32>{0u});
	// cells $flatten\tl_ram.$or$tilelink_soc.v:16150$9885 $procmux$51311 $procmux$52078 $procmux$51314 $procmux$51910 $flatten\tl_ram.$not$tilelink_soc.v:16149$9884
	i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y = or_uu<1>(not_u<1>(p_tl__ram_2e_bus____d____valid), (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_51542__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// cells $flatten\tl_rom.$or$tilelink_soc.v:25335$34577 $procmux$51088 $procmux$52012 $procmux$51091 $procmux$51862 $flatten\tl_rom.$not$tilelink_soc.v:25334$34576
	i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y = or_uu<1>(not_u<1>(p_tl__rom_2e_bus____d____valid), (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}) : (i_procmux_24_51283__Y.slice<1>().val() ? value<1>{0u} : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? value<1>{0x1u} : value<1>{0u}))));
	// connection
	p_tl__data__decoder_2e___bus____a____address = p_data__master_2e_bus____a____address;
	// cells $procmux$51552 $procmux$51553_CMP0
	p_tl__ram_2e_bus____d____data = (eq_uu<1>(p_tl__ram_2e_last__a____opcode.curr, value<3>{0x4u}) ? p_tl__ram_2e___0__.curr : value<32>{0u});
	// cells $flatten\tl_periph.$or$tilelink_soc.v:7227$1484 $procmux$52084 $flatten\tl_periph.$not$tilelink_soc.v:7226$1483
	i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_7227_24_1484__Y = or_uu<1>(not_u<1>(p_tl__periph_2e_bus____d____valid.curr), (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? value<1>{0x1u} : value<1>{0u}));
	// connection
	p_data__master_2e_bus____d____source = i_procmux_24_52042__Y;
	// connection
	p_instruction__master_2e_bus____d____source = i_procmux_24_51883__Y;
	// cells $procmux$52000 $procmux$52003 $procmux$52006
	p_data__master_2e_bus____d____valid = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____valid.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__data__ram____d____valid : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__data__rom____d____valid : value<1>{0u})));
	// cells $procmux$51856 $procmux$51859
	p_instruction__master_2e_bus____d____valid = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? p_tl__ram__arbiter_2e_tl__instr__ram____d____valid : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? p_tl__rom__arbiter_2e_tl__instr__rom____d____valid : value<1>{0u}));
	// cells $procmux$52647 $flatten\data_master.$eq$tilelink_soc.v:3613$1042 $flatten\data_master.$eq$tilelink_soc.v:3612$1041
	i_flatten_5c_data__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? eq_uu<1>(p_data__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_data__master_2e_state.curr, value<2>{0x2u}));
	// connection
	p_data__master_2e__24_58 = p_data__master_2e_bus____d____valid;
	// cells $procmux$51901 $procmux$51341 $procmux$51904 $procmux$51118
	p_tl__instr__decoder_2e___bus____d____data = (p_tl__instr__decoder_2e_rr__grant.slice<1>().val() ? (i_procmux_24_51542__Y.slice<1>().val() ? value<32>{0u} : p_tl__ram_2e_bus____d____data) : (p_tl__instr__decoder_2e_rr__grant.slice<0>().val() ? (i_procmux_24_51283__Y.slice<1>().val() ? value<32>{0u} : p_tl__rom_2e_bus____d____data) : value<32>{0u}));
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:79
	// cell $procmux$52397
	i_flatten_5c_instruction__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? p_instruction__master_2e_data_24_18.curr : p_instruction__master_2e_data.curr);
	// connection
	p_instruction__master_2e__24_42 = p_instruction__master_2e_bus____d____valid;
	// cells $procmux$51935 $procmux$51936_CMP0 $procmux$51937_CMP0 $procmux$51938_CMP0 $procmux$51308 $procmux$51085
	p_data__master_2e_bus____a____ready = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_7227_24_1484__Y : (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr__grant ? i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y : value<1>{0u}) : (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr__grant ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y : value<1>{0u}) : value<1>{0u})));
	// cells $procmux$52643 $procmux$52640 $procmux$52638 $flatten\data_master.$eq$tilelink_soc.v:3614$1043
	p_data__master_2e_rsp__valid = (p_data__master_2e__24_58 ? (p_data__master_2e__24_58 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_data__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_);
	// cells $procmux$52393 $procmux$52390 $procmux$52388 $flatten\instruction_master.$eq$tilelink_soc.v:4940$1221
	p_instruction__master_2e_rsp__data = (p_instruction__master_2e__24_42 ? (p_instruction__master_2e__24_42 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_);
	// cells $flatten\core.$and$tilelink_soc.v:1496$177 $flatten\core.$not$tilelink_soc.v:1494$175 $flatten\core.$and$tilelink_soc.v:1493$174
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_mem__enable_24_439.curr), not_u<1>(p_data__master_2e_rsp__valid));
	// connection
	p_core_2e_decoder_2e_instruction = p_instruction__master_2e_rsp__data;
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53724_CMP0
	i_procmux_24_53724__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53724_CMP1
	i_procmux_24_53724__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53738_CMP0
	i_procmux_24_53738__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53738_CMP1
	i_procmux_24_53738__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53739_CMP0
	i_procmux_24_53739__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:153
	// cell $procmux$53739_CMP1
	i_procmux_24_53739__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53693_CMP0
	i_procmux_24_53693__CMP.slice<0>() = logic_not<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val());
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53693_CMP1
	i_procmux_24_53693__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x5u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53693_CMP2
	i_procmux_24_53693__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x7u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53694_CMP0
	i_procmux_24_53694__CMP.slice<0>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53694_CMP1
	i_procmux_24_53694__CMP.slice<1>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x4u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/core/decoder.py:169
	// cell $procmux$53694_CMP2
	i_procmux_24_53694__CMP.slice<2>() = eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<14,12>().val(), value<3>{0x6u});
	// connection
	p_core_2e_w__arbitration____halted = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y;
	// connection
	p_core_2e_m__arbitration____halted__by__next = p_core_2e_w__arbitration____halted;
	// cells $flatten\core.$or$tilelink_soc.v:1445$126 $flatten\core.$and$tilelink_soc.v:1480$161 $flatten\core.$and$tilelink_soc.v:1479$160 $flatten\core.$not$tilelink_soc.v:1478$159 $procmux$52411 $flatten\data_master.$and$tilelink_soc.v:3623$1052 $flatten\data_master.$logic_not$tilelink_soc.v:3617$1046 $flatten\data_master.$and$tilelink_soc.v:3606$1035 $flatten\data_master.$logic_not$tilelink_soc.v:3522$951
	i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y = or_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>((p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_bus____a____ready)))), p_core_2e_mem__enable_24_307.curr), p_core_2e_m__arbitration____halted__by__next);
	// connection
	p_core_2e_decoder_2e_rd = p_core_2e_decoder_2e_instruction.slice<11,7>().val();
	// connection
	p_core_2e__24_272 = i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y;
	// connection
	p_core_2e_m__arbitration____halted = p_core_2e__24_272;
	// cells $procmux$53773 $procmux$53774_CMP0 $procmux$53775_CMP0 $procmux$53776_CMP0 $procmux$53777_CMP0
	p_core_2e_decoder_2e_alu__left__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x2u} : value<2>{0u}))));
	// cells $procmux$53728 $procmux$53729_CMP0 $procmux$53730_CMP0 $flatten\core.\decoder.$eq$tilelink_soc.v:4361$1189 $procmux$53725 $procmux$53726_CMP0 $procmux$53723 $procmux$53724_ANY
	p_core_2e_decoder_2e_alu__mode__switch = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x20u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_53724__CMP) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u}));
	// cells $procmux$53743 $procmux$53744_CMP0 $procmux$53745_CMP0 $procmux$53746_CMP0 $procmux$53740 $procmux$53741_CMP0 $procmux$53737 $procmux$53738_ANY $procmux$53739_ANY
	p_core_2e_decoder_2e_alu__operation = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_rsp__data.slice<14,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_53738__CMP) ? value<3>{0x3u} : (reduce_or<1>(i_procmux_24_53739__CMP) ? value<3>{0x2u} : value<3>{0u})) : value<3>{0u}) : value<3>{0u})));
	// cells $procmux$53759 $procmux$53760_CMP0 $procmux$53761_CMP0 $procmux$53762_CMP0 $procmux$53763_CMP0 $procmux$53764_CMP0 $procmux$53765_CMP0 $procmux$53766_CMP0
	p_core_2e_decoder_2e_alu__right__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x2u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? value<2>{0x1u} : value<2>{0u})))))));
	// cells $procmux$53698 $procmux$53699_CMP0 $procmux$53700_CMP0 $procmux$53701_CMP0 $procmux$53695 $procmux$53696_CMP0 $procmux$53692 $procmux$53693_ANY $procmux$53694_ANY
	p_core_2e_decoder_2e_branch__mode = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? (reduce_or<1>(i_procmux_24_53693__CMP) ? value<2>{0x2u} : (reduce_or<1>(i_procmux_24_53694__CMP) ? value<2>{0x3u} : value<2>{0u})) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<2>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? value<2>{0x1u} : value<2>{0u})));
	// cells $procmux$53688 $procmux$53689_CMP0
	p_core_2e_decoder_2e_branch__type = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$53748 $procmux$53749_CMP0 $procmux$53750_CMP0 $procmux$53751_CMP0 $procmux$53752_CMP0 $procmux$53753_CMP0 $procmux$53754_CMP0 $procmux$53755_CMP0 $procmux$53756_CMP0 $procmux$53757_CMP0
	p_core_2e_decoder_2e_immediate = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x13u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<31,25>()).concat(p_instruction__master_2e_rsp__data.slice<11,7>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<7>()).concat(p_instruction__master_2e_rsp__data.slice<30,25>()).concat(p_instruction__master_2e_rsp__data.slice<11,8>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x67u}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<20>().concat(p_instruction__master_2e_rsp__data.slice<31,20>()).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x6fu}) ? p_instruction__master_2e_rsp__data.slice<31>().val().repeat<12>().concat(p_instruction__master_2e_rsp__data.slice<19,12>()).concat(p_instruction__master_2e_rsp__data.slice<20>()).concat(p_instruction__master_2e_rsp__data.slice<30,21>()).concat(value<1>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x17u}) ? p_instruction__master_2e_rsp__data.slice<31,12>().concat(value<12>{0u}).val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x37u}) ? p_instruction__master_2e_rsp__data.slice<31,12>().concat(value<12>{0u}).val() : value<32>{0u})))))))));
	// cells $procmux$53683 $procmux$53684_CMP0 $procmux$53685_CMP0
	p_core_2e_decoder_2e_mem__enable = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<1>{0x1u} : value<1>{0u}));
	// cells $procmux$53782 $procmux$53783_CMP0 $procmux$53784_CMP0
	p_core_2e_decoder_2e_mem__size = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? p_instruction__master_2e_rsp__data.slice<13,12>().val() : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_rsp__data.slice<13,12>().val() : value<2>{0u}));
	// cells $procmux$53779 $procmux$53780_CMP0
	p_core_2e_decoder_2e_mem__unsigned = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? p_instruction__master_2e_rsp__data.slice<14>().val() : value<1>{0u});
	// cells $procmux$53786 $procmux$53787_CMP0
	p_core_2e_decoder_2e_mem__we = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0x1u} : value<1>{0u});
	// cells $procmux$53713 $procmux$53714_CMP0 $procmux$53715_CMP0 $flatten\core.\decoder.$reduce_or$tilelink_soc.v:4362$1190
	p_core_2e_decoder_2e_register__write = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x23u}) ? value<1>{0u} : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x63u}) ? value<1>{0u} : reduce_or<1>(p_core_2e_decoder_2e_rd)));
	// cells $procmux$53709 $procmux$53710_CMP0 $procmux$53711_CMP0 $procmux$53706 $procmux$53707_CMP0 $procmux$53704 $flatten\core.\decoder.$eq$tilelink_soc.v:4363$1191
	p_core_2e_decoder_2e_writeback__select = (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x33u}) ? (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<31,25>().val(), value<6>{0x1u}) ? value<2>{0x2u} : value<2>{0u}) : value<2>{0u}) : (eq_uu<1>(p_core_2e_decoder_2e_instruction.slice<6,0>().val(), value<7>{0x3u}) ? value<2>{0x1u} : value<2>{0u}));
	// cells $procmux$52384 $flatten\instruction_master.$eq$tilelink_soc.v:4937$1218 $flatten\instruction_master.$eq$tilelink_soc.v:4936$1217
	i_flatten_5c_instruction__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_ = (p_instruction__master_2e_read__ptr.curr ? eq_uu<1>(p_instruction__master_2e_state_24_5.curr, value<2>{0x2u}) : eq_uu<1>(p_instruction__master_2e_state.curr, value<2>{0x2u}));
	// connection
	p_instruction__master_2e__24_38 = p_instruction__master_2e_bus____d____valid;
	// connection
	value<2>().concat(value<1>()).concat(value<1>()).concat(value<2>()).concat(value<1>()).concat(value<1>()).concat(value<1>()).concat(value<2>()).concat(value<2>()).concat(value<2>()).concat(value<1>()).concat(value<3>()).concat(value<32>()).concat(value<5>()).concat(p_core_2e_rs2).concat(p_core_2e_rs1) = p_core_2e_decoder_2e_writeback__select.concat(p_core_2e_decoder_2e_register__write).concat(p_core_2e_decoder_2e_mem__unsigned).concat(p_core_2e_decoder_2e_mem__size).concat(p_core_2e_decoder_2e_mem__we).concat(p_core_2e_decoder_2e_mem__enable).concat(p_core_2e_decoder_2e_branch__type).concat(p_core_2e_decoder_2e_branch__mode).concat(p_core_2e_decoder_2e_alu__right__select).concat(p_core_2e_decoder_2e_alu__left__select).concat(p_core_2e_decoder_2e_alu__mode__switch).concat(p_core_2e_decoder_2e_alu__operation).concat(p_core_2e_decoder_2e_immediate).concat(p_core_2e_decoder_2e_rd).concat(p_core_2e_decoder_2e_instruction.slice<24,20>()).concat(p_core_2e_decoder_2e_instruction.slice<19,15>()).val();
	// cells $procmux$52380 $procmux$52377 $procmux$52375 $flatten\instruction_master.$eq$tilelink_soc.v:4939$1220
	p_instruction__master_2e_rsp__valid = (p_instruction__master_2e__24_38 ? (p_instruction__master_2e__24_38 ? (eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr) ? value<1>{0x1u} : i_flatten_5c_instruction__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_) : value<1>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_rsp__valid_5b_0_3a_0_5d_);
	// connection
	p_data__master_2e__24_74 = p_data__master_2e_bus____d____valid;
	// cells $procmux$52985 $flatten\core.$and$tilelink_soc.v:1470$151 $flatten\core.$and$tilelink_soc.v:1469$150 $flatten\core.$not$tilelink_soc.v:1468$149
	p_core_2e_d__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_data__master_2e__24_76 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_78 = p_data__master_2e_bus____d____valid;
	// cells $procmux$52069 $procmux$52072 $procmux$51371 $procmux$52075 $procmux$51148
	p_tl__data__decoder_2e___bus____d____data = (p_tl__data__decoder_2e_rr__grant.slice<2>().val() ? p_tl__periph_2e_bus____d____data.curr : (p_tl__data__decoder_2e_rr__grant.slice<1>().val() ? (p_tl__ram__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__ram_2e_bus____d____data : value<32>{0u}) : (p_tl__data__decoder_2e_rr__grant.slice<0>().val() ? (p_tl__rom__arbiter_2e_bus____d____source.slice<1>().val() ? p_tl__rom_2e_bus____d____data : value<32>{0u}) : value<32>{0u})));
	// cells $procmux$53329 $flatten\core.$or$tilelink_soc.v:1391$70 $flatten\core.$and$tilelink_soc.v:1390$69 $flatten\core.$or$tilelink_soc.v:1389$68 $flatten\core.$eq$tilelink_soc.v:1388$67 $flatten\core.$eq$tilelink_soc.v:1387$66 $flatten\core.$and$tilelink_soc.v:1386$65 $flatten\core.$and$tilelink_soc.v:1385$64 $flatten\core.$reduce_or$tilelink_soc.v:1384$63 $flatten\core.$and$tilelink_soc.v:1383$62 $flatten\core.$or$tilelink_soc.v:1381$60 $flatten\core.$eq$tilelink_soc.v:1380$59 $flatten\core.$eq$tilelink_soc.v:1379$58 $flatten\core.$and$tilelink_soc.v:1378$57 $flatten\core.$and$tilelink_soc.v:1377$56 $flatten\core.$reduce_or$tilelink_soc.v:1376$55
	i_procmux_24_53329__Y = (or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_124.curr)), p_core_2e_register__write_24_129.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_141.curr)), p_core_2e_register__write_24_146.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2)))) ? value<1>{0x1u} : i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y);
	// cells $procmux$52676 $procmux$52673 $procmux$52671
	p_data__master_2e_req__size_24_73 = (p_data__master_2e__24_74 ? (p_data__master_2e__24_74 ? (i_procmux_24_52042__Y ? p_data__master_2e_size_24_40.curr : p_data__master_2e_size.curr) : value<2>{0u}) : value<2>{0u});
	// connection
	p_core_2e_d__arbitration____halted__by__next = i_procmux_24_53329__Y;
	// cells $procmux$52686 $procmux$52683 $procmux$52681
	p_data__master_2e_is__unsigned = (p_data__master_2e__24_76 ? (p_data__master_2e__24_76 ? (i_procmux_24_52042__Y ? p_data__master_2e_unsigned_24_43.curr : p_data__master_2e_unsigned.curr) : value<1>{0u}) : value<1>{0u});
	// connection
	p_data__master_2e_bus____d____data = p_tl__data__decoder_2e___bus____d____data;
	// cells $procmux$52696 $procmux$52693 $procmux$52691
	p_data__master_2e_addr__local__bits = (p_data__master_2e__24_78 ? (p_data__master_2e__24_78 ? (i_procmux_24_52042__Y ? p_data__master_2e_addr__low_24_46.curr : p_data__master_2e_addr__low.curr) : value<2>{0u}) : value<2>{0u});
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:3619$1048
	p_data__master_2e__24_82 = logic_not<1>(p_data__master_2e_req__size_24_73);
	// connection
	p_data__master_2e__24_80 = p_data__master_2e_bus____d____valid;
	// cells $flatten\core.$or$tilelink_soc.v:1612$293 $flatten\core.$and$tilelink_soc.v:1625$306 $flatten\core.$not$tilelink_soc.v:1624$305 $flatten\core.$or$tilelink_soc.v:1623$304
	p_core_2e_d__arbitration____halted = or_uu<1>(and_uu<1>(or_uu<1>(p_core_2e_d__arbitration____valid.curr, p_core_2e_d__arbitration____remove), not_u<1>(p_instruction__master_2e_rsp__valid)), p_core_2e_d__arbitration____halted__by__next);
	// connection
	p_core_2e_f__arbitration____halted__by__next = p_core_2e_d__arbitration____halted;
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:3565$994
	p_data__master_2e__24_276 = eq_uu<1>(p_data__master_2e_req__size_24_73, value<1>{0x1u});
	// connection
	p_data__master_2e_req__size = p_core_2e_mem__size_24_309.curr;
	// cells $procmux$52982 $flatten\core.$and$tilelink_soc.v:1467$148 $flatten\core.$and$tilelink_soc.v:1466$147 $flatten\core.$not$tilelink_soc.v:1465$146
	p_core_2e_f__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_data__master_2e_req__addr = p_core_2e_m__alu__result.curr;
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:3516$945
	p_data__master_2e__24_18 = logic_not<1>(p_data__master_2e_req__size);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:149
	// cell $flatten\data_master.$eq$tilelink_soc.v:3601$1030
	p_data__master_2e__24_342 = eq_uu<1>(p_data__master_2e_req__size_24_73, value<2>{0x2u});
	// connection
	p_data__master_2e_req__we = p_core_2e_mem__we_24_308.curr;
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3528$957
	p_data__master_2e__24_20 = eq_uu<1>(p_data__master_2e_req__size, value<1>{0x1u});
	// cells $flatten\core.$and$tilelink_soc.v:1477$158 $flatten\core.$and$tilelink_soc.v:1476$157 $flatten\core.$not$tilelink_soc.v:1474$155
	p_data__master_2e_req__valid = and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted__by__next)), p_core_2e_mem__enable_24_307.curr);
	// connection
	p_tl__instr__decoder_2e___bus____a____address = p_core_2e_f__program__counter.curr;
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3539$968
	p_data__master_2e__24_22 = eq_uu<1>(p_data__master_2e_req__size, value<2>{0x2u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:95
	// cell $procmux$52922
	p_data__master_2e_bus____a____opcode = (p_data__master_2e_req__we ? value<3>{0u} : value<3>{0x4u});
	// cells $procmux$52628 $flatten\data_master.$and$tilelink_soc.v:3505$934 $flatten\data_master.$logic_not$tilelink_soc.v:3494$923 $flatten\data_master.$and$tilelink_soc.v:3483$912 $flatten\data_master.$logic_not$tilelink_soc.v:3472$901
	p_data__master_2e_bus____a____valid = (p_data__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_data__master_2e_state_24_5.curr), p_data__master_2e_req__valid) : and_uu<1>(logic_not<1>(p_data__master_2e_state.curr), p_data__master_2e_req__valid));
	// cells $flatten\core.$and$tilelink_soc.v:1603$284 $flatten\core.$not$tilelink_soc.v:1592$273 $flatten\core.$and$tilelink_soc.v:1581$262 $flatten\core.$not$tilelink_soc.v:1570$251
	p_instruction__master_2e_req__valid = and_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>(p_core_2e_f__arbitration____halted__by__next)), not_u<1>(p_core_2e_f__arbitration____remove));
	// cells $procmux$51976 $procmux$51977_CMP0
	p_tl__periph_2e_bus____a____opcode = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u});
	// cells $procmux$52009 $procmux$52010_CMP0
	p_tl__data__decoder_2e_bus____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$52745 $procmux$52710 $procmux$52708 $procmux$52704 $procmux$52702 $procmux$52725 $procmux$52723 $procmux$52719 $procmux$52717 $procmux$52714 $procmux$52716_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:3600$1029 $flatten\data_master.$ternary$tilelink_soc.v:3599$1028 $flatten\data_master.$ternary$tilelink_soc.v:3598$1027 $flatten\data_master.$ternary$tilelink_soc.v:3597$1026 $flatten\data_master.$ternary$tilelink_soc.v:3596$1025 $flatten\data_master.$ternary$tilelink_soc.v:3595$1024 $flatten\data_master.$ternary$tilelink_soc.v:3593$1022 $flatten\data_master.$ternary$tilelink_soc.v:3592$1021 $flatten\data_master.$ternary$tilelink_soc.v:3591$1020 $flatten\data_master.$ternary$tilelink_soc.v:3590$1019 $flatten\data_master.$ternary$tilelink_soc.v:3589$1018 $flatten\data_master.$ternary$tilelink_soc.v:3588$1017 $flatten\data_master.$ternary$tilelink_soc.v:3587$1016 $flatten\data_master.$ternary$tilelink_soc.v:3586$1015 $flatten\data_master.$ternary$tilelink_soc.v:3585$1014 $flatten\data_master.$ternary$tilelink_soc.v:3584$1013 $flatten\data_master.$ternary$tilelink_soc.v:3582$1011 $flatten\data_master.$ternary$tilelink_soc.v:3581$1010 $flatten\data_master.$ternary$tilelink_soc.v:3580$1009 $flatten\data_master.$ternary$tilelink_soc.v:3579$1008 $flatten\data_master.$ternary$tilelink_soc.v:3578$1007 $flatten\data_master.$ternary$tilelink_soc.v:3577$1006 $flatten\data_master.$ternary$tilelink_soc.v:3576$1005 $flatten\data_master.$ternary$tilelink_soc.v:3575$1004 $flatten\data_master.$ternary$tilelink_soc.v:3574$1003 $flatten\data_master.$ternary$tilelink_soc.v:3573$1002 $flatten\data_master.$ternary$tilelink_soc.v:3571$1000 $flatten\data_master.$ternary$tilelink_soc.v:3570$999 $flatten\data_master.$ternary$tilelink_soc.v:3569$998 $flatten\data_master.$ternary$tilelink_soc.v:3568$997 $flatten\data_master.$ternary$tilelink_soc.v:3567$996 $flatten\data_master.$ternary$tilelink_soc.v:3566$995 $procmux$52742 $procmux$52740 $procmux$52736 $procmux$52734 $procmux$52729 $procmux$52730_CMP0 $procmux$52731_CMP0 $procmux$52732_CMP0 $procmux$52733_CMP0 $flatten\data_master.$ternary$tilelink_soc.v:3564$993 $flatten\data_master.$ternary$tilelink_soc.v:3563$992 $flatten\data_master.$ternary$tilelink_soc.v:3562$991 $flatten\data_master.$ternary$tilelink_soc.v:3560$989 $flatten\data_master.$ternary$tilelink_soc.v:3559$988 $flatten\data_master.$ternary$tilelink_soc.v:3558$987 $flatten\data_master.$ternary$tilelink_soc.v:3557$986 $flatten\data_master.$ternary$tilelink_soc.v:3556$985 $flatten\data_master.$ternary$tilelink_soc.v:3555$984 $flatten\data_master.$ternary$tilelink_soc.v:3554$983 $flatten\data_master.$ternary$tilelink_soc.v:3553$982 $flatten\data_master.$ternary$tilelink_soc.v:3552$981 $flatten\data_master.$ternary$tilelink_soc.v:3551$980 $flatten\data_master.$ternary$tilelink_soc.v:3549$978 $flatten\data_master.$ternary$tilelink_soc.v:3548$977 $flatten\data_master.$ternary$tilelink_soc.v:3547$976 $flatten\data_master.$ternary$tilelink_soc.v:3546$975 $flatten\data_master.$ternary$tilelink_soc.v:3545$974 $flatten\data_master.$ternary$tilelink_soc.v:3544$973 $flatten\data_master.$ternary$tilelink_soc.v:3543$972 $flatten\data_master.$ternary$tilelink_soc.v:3542$971 $flatten\data_master.$ternary$tilelink_soc.v:3541$970 $flatten\data_master.$ternary$tilelink_soc.v:3540$969 $flatten\data_master.$ternary$tilelink_soc.v:3538$967 $flatten\data_master.$ternary$tilelink_soc.v:3537$966 $flatten\data_master.$ternary$tilelink_soc.v:3536$965 $flatten\data_master.$ternary$tilelink_soc.v:3535$964 $flatten\data_master.$ternary$tilelink_soc.v:3534$963 $flatten\data_master.$ternary$tilelink_soc.v:3533$962 $flatten\data_master.$ternary$tilelink_soc.v:3532$961 $flatten\data_master.$ternary$tilelink_soc.v:3531$960 $flatten\data_master.$ternary$tilelink_soc.v:3530$959 $flatten\data_master.$ternary$tilelink_soc.v:3529$958 $flatten\data_master.$ternary$tilelink_soc.v:3527$956 $flatten\data_master.$ternary$tilelink_soc.v:3526$955 $flatten\data_master.$ternary$tilelink_soc.v:3525$954 $flatten\data_master.$ternary$tilelink_soc.v:3524$953 $flatten\data_master.$ternary$tilelink_soc.v:3523$952 $flatten\data_master.$ternary$tilelink_soc.v:3521$950 $flatten\data_master.$ternary$tilelink_soc.v:3520$949 $flatten\data_master.$ternary$tilelink_soc.v:3519$948 $flatten\data_master.$ternary$tilelink_soc.v:3518$947 $flatten\data_master.$ternary$tilelink_soc.v:3517$946 $flatten\data_master.$ternary$tilelink_soc.v:3515$944 $flatten\data_master.$ternary$tilelink_soc.v:3514$943 $flatten\data_master.$ternary$tilelink_soc.v:3513$942 $flatten\data_master.$ternary$tilelink_soc.v:3512$941 $flatten\data_master.$ternary$tilelink_soc.v:3511$940 $flatten\data_master.$ternary$tilelink_soc.v:3510$939 $flatten\data_master.$ternary$tilelink_soc.v:3509$938 $flatten\data_master.$ternary$tilelink_soc.v:3508$937 $flatten\data_master.$ternary$tilelink_soc.v:3507$936 $flatten\data_master.$ternary$tilelink_soc.v:3506$935 $flatten\data_master.$ternary$tilelink_soc.v:3504$933 $flatten\data_master.$ternary$tilelink_soc.v:3503$932 $flatten\data_master.$ternary$tilelink_soc.v:3502$931 $flatten\data_master.$ternary$tilelink_soc.v:3501$930 $flatten\data_master.$ternary$tilelink_soc.v:3500$929 $flatten\data_master.$ternary$tilelink_soc.v:3499$928 $flatten\data_master.$ternary$tilelink_soc.v:3498$927 $flatten\data_master.$ternary$tilelink_soc.v:3497$926 $flatten\data_master.$ternary$tilelink_soc.v:3496$925 $flatten\data_master.$ternary$tilelink_soc.v:3495$924 $flatten\data_master.$ternary$tilelink_soc.v:3493$922 $flatten\data_master.$ternary$tilelink_soc.v:3492$921 $flatten\data_master.$ternary$tilelink_soc.v:3491$920 $flatten\data_master.$ternary$tilelink_soc.v:3490$919 $flatten\data_master.$ternary$tilelink_soc.v:3489$918 $flatten\data_master.$ternary$tilelink_soc.v:3488$917 $flatten\data_master.$ternary$tilelink_soc.v:3487$916 $flatten\data_master.$ternary$tilelink_soc.v:3486$915 $flatten\data_master.$ternary$tilelink_soc.v:3485$914 $flatten\data_master.$ternary$tilelink_soc.v:3484$913 $flatten\data_master.$ternary$tilelink_soc.v:3482$911 $flatten\data_master.$ternary$tilelink_soc.v:3481$910 $flatten\data_master.$ternary$tilelink_soc.v:3480$909 $flatten\data_master.$ternary$tilelink_soc.v:3479$908 $flatten\data_master.$ternary$tilelink_soc.v:3478$907 $flatten\data_master.$ternary$tilelink_soc.v:3477$906 $flatten\data_master.$ternary$tilelink_soc.v:3476$905 $flatten\data_master.$ternary$tilelink_soc.v:3475$904 $flatten\data_master.$ternary$tilelink_soc.v:3474$903 $flatten\data_master.$ternary$tilelink_soc.v:3473$902 $flatten\data_master.$ternary$tilelink_soc.v:3471$900 $flatten\data_master.$ternary$tilelink_soc.v:3470$899 $flatten\data_master.$ternary$tilelink_soc.v:3469$898 $flatten\data_master.$ternary$tilelink_soc.v:3468$897 $flatten\data_master.$ternary$tilelink_soc.v:3467$896 $flatten\data_master.$ternary$tilelink_soc.v:3628$1057 $flatten\data_master.$ternary$tilelink_soc.v:3627$1056 $flatten\data_master.$ternary$tilelink_soc.v:3626$1055 $flatten\data_master.$ternary$tilelink_soc.v:3625$1054 $flatten\data_master.$ternary$tilelink_soc.v:3624$1053 $flatten\data_master.$ternary$tilelink_soc.v:3622$1051 $flatten\data_master.$ternary$tilelink_soc.v:3621$1050 $flatten\data_master.$ternary$tilelink_soc.v:3620$1049
	p_data__master_2e_read__data = (p_data__master_2e__24_80 ? (p_data__master_2e__24_80 ? (p_data__master_2e__24_342 ? (p_data__master_2e__24_80 ? (p_data__master_2e__24_342 ? p_tl__data__decoder_2e___bus____d____data : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_80 ? (p_data__master_2e__24_276 ? (p_data__master_2e__24_80 ? (p_data__master_2e__24_276 ? (p_data__master_2e_addr__local__bits.slice<1>().val() ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,16>()).val() : (not_u<1>(p_data__master_2e_addr__local__bits.slice<1>().val()) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,0>()).val() : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_80 ? (p_data__master_2e__24_82 ? (p_data__master_2e__24_80 ? (p_data__master_2e__24_82 ? (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x3u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<31>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<31,24>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x2u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<23>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<23,16>()).val() : (eq_uu<1>(p_data__master_2e_addr__local__bits, value<2>{0x1u}) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<15>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<15,8>()).val() : (logic_not<1>(p_data__master_2e_addr__local__bits) ? (p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val()).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat((p_data__master_2e_is__unsigned ? value<1>{0u} : p_data__master_2e_bus____d____data.slice<7>().val())).concat(p_tl__data__decoder_2e___bus____d____data.slice<7,0>()).val() : value<32>{0u})))) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : value<32>{0u})) : value<32>{0u})) : value<32>{0u}) : value<32>{0u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:120
	// cell $procmux$52660
	i_flatten_5c_data__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_ = (p_data__master_2e_read__ptr.curr ? p_data__master_2e_data_24_63.curr : p_data__master_2e_data_24_62.curr);
	// connection
	p_data__master_2e__24_64 = p_data__master_2e_bus____d____valid;
	// cells $procmux$51820 $procmux$51821_CMP0 $procmux$51822_CMP0 $procmux$51335 $procmux$51112
	p_instruction__master_2e_bus____a____ready = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y) : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y) : value<1>{0u}));
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:306
	// cell $flatten\core.$and$tilelink_soc.v:1492$173
	i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y = and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_mem__enable_24_439.curr);
	// cells $procmux$52407 $flatten\instruction_master.$and$tilelink_soc.v:4928$1209 $flatten\instruction_master.$logic_not$tilelink_soc.v:4927$1208 $flatten\instruction_master.$and$tilelink_soc.v:4926$1207 $flatten\instruction_master.$logic_not$tilelink_soc.v:4925$1206
	p_instruction__master_2e_bus____a____valid = (p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_req__valid) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_req__valid));
	// cells $procmux$52841 $procmux$52838 $procmux$52850 $procmux$52847 $procmux$52844 $procmux$52846_CMP0 $procmux$52861 $procmux$52858 $procmux$52853 $procmux$52854_CMP0 $procmux$52855_CMP0 $procmux$52856_CMP0 $procmux$52857_CMP0
	p_data__master_2e_bus____a____mask = (p_data__master_2e__24_22 ? (p_data__master_2e__24_22 ? value<4>{0xfu} : value<4>{0u}) : (p_data__master_2e__24_20 ? (p_data__master_2e__24_20 ? (p_data__master_2e_req__addr.slice<1>().val() ? value<4>{0xcu} : (not_u<1>(p_data__master_2e_req__addr.slice<1>().val()) ? value<4>{0x3u} : value<4>{0u})) : value<4>{0u}) : (p_data__master_2e__24_18 ? (p_data__master_2e__24_18 ? (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<4>{0x8u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<4>{0x4u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<4>{0x2u} : (logic_not<1>(p_data__master_2e_req__addr.slice<1,0>().val()) ? value<4>{0x1u} : value<4>{0u})))) : value<4>{0u}) : value<4>{0u})));
	// connection
	p_tl__periph_2e_bus____a____valid = p_tl__data__decoder_2e_bus____a____valid;
	// connection
	p_tl__periph_2e_bus____a____ready = i_flatten_5c_tl__periph_2e__24_or_24_tilelink__soc_2e_v_3a_7227_24_1484__Y;
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:3583$1012
	p_data__master_2e__24_30 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:70
	// cell $flatten\instruction_master.$and$tilelink_soc.v:4930$1211
	p_instruction__master_2e__24_19 = and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready);
	// cells $procmux$51991 $procmux$51992_CMP0
	p_tl__periph_2e_bus____a____mask = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____mask : value<4>{0u});
	// connection
	p_data__master_2e_rsp__ready = i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y;
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:60
	// cell $flatten\core.$not$tilelink_soc.v:1622$303
	p_instruction__master_2e_rsp__ready = not_u<1>(p_core_2e_d__arbitration____halted__by__next);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$logic_not$tilelink_soc.v:3550$979
	p_data__master_2e__24_24 = logic_not<1>(p_data__master_2e_req__size);
	// cells $procmux$51988 $procmux$51989_CMP0
	p_tl__periph_2e_bus____a____address = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____address.slice<3,0>().val() : value<4>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7184$1441 $flatten\tl_periph.$and$tilelink_soc.v:7173$1430 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7262$1521 $flatten\tl_periph.$logic_not$tilelink_soc.v:7246$1505 $flatten\tl_periph.$eq$tilelink_soc.v:7256$1515 $flatten\tl_periph.$and$tilelink_soc.v:7228$1485
	p_tl__periph_2e__24_11 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:352
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1599$280
	p_core_2e__24_661 = reduce_or<1>(p_core_2e_rs2);
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:345
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1544$225
	p_core_2e__24_561 = reduce_or<1>(p_core_2e_rs1);
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:139
	// cell $flatten\core.$ternary$tilelink_soc.v:1419$98
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1419_24_98__Y = (p_core_2e_x__rs2__is__forwarded.curr ? p_core_2e_x__rs2__value__forwarded.curr : p_core_2e___1__.curr);
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:138
	// cell $flatten\core.$ternary$tilelink_soc.v:1417$96
	i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1417_24_96__Y = (p_core_2e_x__rs1__is__forwarded.curr ? p_core_2e_x__rs1__value__forwarded.curr : p_core_2e___0__.curr);
	// cells $procmux$53138 $procmux$53139_CMP0 $procmux$53140_CMP0 $procmux$53141_CMP0 $procmux$52656 $procmux$52653 $procmux$52651 $flatten\data_master.$eq$tilelink_soc.v:3615$1044
	p_core_2e_w__write__data = (eq_uu<1>(p_core_2e_writeback__select_24_444.curr, value<2>{0x2u}) ? p_core_2e_w__muldiv__result.curr : (eq_uu<1>(p_core_2e_writeback__select_24_444.curr, value<2>{0x1u}) ? (p_data__master_2e__24_64 ? (p_data__master_2e__24_64 ? (eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr) ? p_data__master_2e_read__data : i_flatten_5c_data__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_) : value<32>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_rsp__data_5b_31_3a_0_5d_) : (logic_not<1>(p_core_2e_writeback__select_24_444.curr) ? p_core_2e_w__alu__result.curr : value<32>{0u})));
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:352
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1572$253
	p_core_2e__24_611 = reduce_or<1>(p_core_2e_rs2);
	// \src: tilelink_soc.v:26968.8-26987.4|/home/michiel/development/riscv-tilelink/core/core.py:345
	// cell $flatten\core.$reduce_or$tilelink_soc.v:1517$198
	p_core_2e__24_511 = reduce_or<1>(p_core_2e_rs1);
	// cells $procmux$52546 $procmux$52540 $procmux$52538
	i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1083 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? value<2>{0x1u} : p_data__master_2e_state_24_5.curr) : value<2>{0u}) : p_data__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:125
	// cell $flatten\data_master.$and$tilelink_soc.v:3594$1023
	p_data__master_2e__24_32 = and_uu<1>(p_data__master_2e_rsp__valid, p_data__master_2e_rsp__ready);
	// cells $procmux$52543 $procmux$52533 $procmux$52531
	i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1084 = (p_data__master_2e__24_30 ? (p_data__master_2e__24_30 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_data__master_2e_state.curr);
	// cells $procmux$52365 $procmux$52346 $procmux$52344
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1240 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<2>{0x1u} : p_instruction__master_2e_state_24_5.curr) : value<2>{0u}) : p_instruction__master_2e_state_24_5.curr);
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:84
	// cell $flatten\instruction_master.$and$tilelink_soc.v:4931$1212
	p_instruction__master_2e__24_21 = and_uu<1>(p_instruction__master_2e_rsp__valid, p_instruction__master_2e_rsp__ready);
	// cells $procmux$52362 $procmux$52339 $procmux$52337
	i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1241 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_state.curr : value<2>{0x1u}) : value<2>{0u}) : p_instruction__master_2e_state.curr);
	// cells $procmux$52359 $procmux$52332 $procmux$52330
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1242 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? value<32>{0u} : p_instruction__master_2e_data_24_18.curr) : value<32>{0u}) : p_instruction__master_2e_data_24_18.curr);
	// cells $procmux$52356 $procmux$52353 $procmux$52351
	i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1243 = (p_instruction__master_2e__24_19 ? (p_instruction__master_2e__24_19 ? (p_instruction__master_2e_send__ptr.curr ? p_instruction__master_2e_data.curr : value<32>{0u}) : value<32>{0u}) : p_instruction__master_2e_data.curr);
	// cells $flatten\core.$or$tilelink_soc.v:1598$279 $flatten\core.$and$tilelink_soc.v:1597$278 $flatten\core.$or$tilelink_soc.v:1596$277 $flatten\core.$eq$tilelink_soc.v:1595$276 $flatten\core.$eq$tilelink_soc.v:1594$275 $flatten\core.$and$tilelink_soc.v:1593$274 $flatten\core.$and$tilelink_soc.v:1591$272 $flatten\core.$reduce_or$tilelink_soc.v:1590$271 $flatten\core.$and$tilelink_soc.v:1589$270 $flatten\core.$or$tilelink_soc.v:1588$269 $flatten\core.$eq$tilelink_soc.v:1587$268 $flatten\core.$eq$tilelink_soc.v:1586$267 $flatten\core.$and$tilelink_soc.v:1585$266 $flatten\core.$and$tilelink_soc.v:1584$265 $flatten\core.$reduce_or$tilelink_soc.v:1583$264
	p_core_2e__24_659 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_124.curr)), p_core_2e_register__write_24_129.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_141.curr)), p_core_2e_register__write_24_146.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1543$224 $flatten\core.$and$tilelink_soc.v:1542$223 $flatten\core.$or$tilelink_soc.v:1541$222 $flatten\core.$eq$tilelink_soc.v:1540$221 $flatten\core.$eq$tilelink_soc.v:1539$220 $flatten\core.$and$tilelink_soc.v:1538$219 $flatten\core.$and$tilelink_soc.v:1536$217 $flatten\core.$reduce_or$tilelink_soc.v:1535$216 $flatten\core.$and$tilelink_soc.v:1534$215 $flatten\core.$or$tilelink_soc.v:1533$214 $flatten\core.$eq$tilelink_soc.v:1532$213 $flatten\core.$eq$tilelink_soc.v:1531$212 $flatten\core.$and$tilelink_soc.v:1530$211 $flatten\core.$and$tilelink_soc.v:1529$210 $flatten\core.$reduce_or$tilelink_soc.v:1528$209
	p_core_2e__24_559 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_124.curr)), p_core_2e_register__write_24_129.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_141.curr)), p_core_2e_register__write_24_146.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1571$252 $flatten\core.$and$tilelink_soc.v:1569$250 $flatten\core.$or$tilelink_soc.v:1568$249 $flatten\core.$eq$tilelink_soc.v:1567$248 $flatten\core.$eq$tilelink_soc.v:1566$247 $flatten\core.$and$tilelink_soc.v:1565$246 $flatten\core.$and$tilelink_soc.v:1564$245 $flatten\core.$reduce_or$tilelink_soc.v:1563$244 $flatten\core.$and$tilelink_soc.v:1562$243 $flatten\core.$or$tilelink_soc.v:1561$242 $flatten\core.$eq$tilelink_soc.v:1560$241 $flatten\core.$eq$tilelink_soc.v:1558$239 $flatten\core.$and$tilelink_soc.v:1557$238 $flatten\core.$and$tilelink_soc.v:1556$237 $flatten\core.$reduce_or$tilelink_soc.v:1555$236
	p_core_2e__24_609 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_124.curr)), p_core_2e_register__write_24_129.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_141.curr)), p_core_2e_register__write_24_146.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2))));
	// cells $flatten\core.$or$tilelink_soc.v:1516$197 $flatten\core.$and$tilelink_soc.v:1514$195 $flatten\core.$or$tilelink_soc.v:1513$194 $flatten\core.$eq$tilelink_soc.v:1512$193 $flatten\core.$eq$tilelink_soc.v:1511$192 $flatten\core.$and$tilelink_soc.v:1510$191 $flatten\core.$and$tilelink_soc.v:1509$190 $flatten\core.$reduce_or$tilelink_soc.v:1508$189 $flatten\core.$and$tilelink_soc.v:1507$188 $flatten\core.$or$tilelink_soc.v:1506$187 $flatten\core.$eq$tilelink_soc.v:1505$186 $flatten\core.$eq$tilelink_soc.v:1503$184 $flatten\core.$and$tilelink_soc.v:1502$183 $flatten\core.$and$tilelink_soc.v:1501$182 $flatten\core.$reduce_or$tilelink_soc.v:1500$181
	p_core_2e__24_509 = or_uu<1>(and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_124.curr)), p_core_2e_register__write_24_129.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2))), and_uu<1>(and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, reduce_or<1>(p_core_2e_writeback__select_24_141.curr)), p_core_2e_register__write_24_146.curr), or_uu<1>(eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2))));
	// cells $procmux$52916 $procmux$52911 $procmux$52912_CMP0 $procmux$52913_CMP0 $procmux$52914_CMP0 $procmux$52915_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<7,0>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_req__addr.slice<1,0>().val()) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$52908 $procmux$52903 $procmux$52904_CMP0 $procmux$52905_CMP0 $procmux$52906_CMP0 $procmux$52907_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<31,24>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x3u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$52900 $procmux$52895 $procmux$52896_CMP0 $procmux$52897_CMP0 $procmux$52898_CMP0 $procmux$52899_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<15,8>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x2u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x1u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (logic_not<1>(p_data__master_2e_req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$52892 $procmux$52887 $procmux$52888_CMP0 $procmux$52889_CMP0 $procmux$52890_CMP0 $procmux$52891_CMP0
	i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_.slice<23,16>() = (p_data__master_2e__24_24 ? (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x3u}) ? value<8>{0u} : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x2u}) ? p_core_2e_m__rs2__value.curr.slice<7,0>().val() : (eq_uu<1>(p_data__master_2e_req__addr.slice<1,0>().val(), value<2>{0x1u}) ? value<8>{0u} : (logic_not<1>(p_data__master_2e_req__addr.slice<1,0>().val()) ? value<8>{0u} : value<8>{0u})))) : value<8>{0u});
	// cells $procmux$53496 $procmux$53497_CMP0 $procmux$53498_CMP0 $procmux$53499_CMP0
	p_core_2e_x__alu__right = (eq_uu<1>(p_core_2e_alu__right__select_24_180.curr, value<2>{0x2u}) ? value<32>{0x4u} : (eq_uu<1>(p_core_2e_alu__right__select_24_180.curr, value<2>{0x1u}) ? p_core_2e_immediate_24_176.curr : (logic_not<1>(p_core_2e_alu__right__select_24_180.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1419_24_98__Y : value<32>{0u})));
	// cells $procmux$53492 $procmux$53493_CMP0 $procmux$53494_CMP0
	p_core_2e_x__alu__left = (eq_uu<1>(p_core_2e_alu__left__select_24_179.curr, value<2>{0x1u}) ? p_core_2e_x__program__counter.curr : (logic_not<1>(p_core_2e_alu__left__select_24_179.curr) ? i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1417_24_96__Y : value<32>{0u}));
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $procmux$52919
	i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_ = (p_data__master_2e__24_24 ? i_flatten_5c_data__master_2e__24_2_5c_data_5b_31_3a_0_5d_ : value<32>{0u});
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3561$990
	p_data__master_2e__24_26 = eq_uu<1>(p_data__master_2e_req__size, value<1>{0x1u});
	// cells $procmux$51853 $procmux$51854_CMP0
	p_tl__instr__decoder_2e_tl__instr__ram____a____valid = (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$51591 $procmux$51588 $procmux$51586 $procmux$51587_CMP0
	i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1547 = (p_tl__periph_2e__24_11 ? (p_tl__periph_2e__24_11 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}) : value<1>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7233$1492 $flatten\tl_periph.$and$tilelink_soc.v:7232$1491 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7229$1486 $flatten\tl_periph.$logic_not$tilelink_soc.v:7211$1468 $flatten\tl_periph.$eq$tilelink_soc.v:7221$1478 $flatten\tl_periph.$and$tilelink_soc.v:7194$1451
	p_tl__periph_2e__24_23 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $procmux$52526 $procmux$52520 $procmux$52518
	i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1083) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1083);
	// cells $procmux$52523 $procmux$52513 $procmux$52511
	i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088 = (p_data__master_2e__24_32 ? (p_data__master_2e__24_32 ? (p_data__master_2e_read__ptr.curr ? i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1084 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1084);
	// cells $procmux$52325 $procmux$52306 $procmux$52304
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<2>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1240) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1240);
	// connection
	p_instruction__master_2e__24_27 = i_procmux_24_53329__Y;
	// cells $procmux$52322 $procmux$52299 $procmux$52297
	i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1241 : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_state_24_next_5b_1_3a_0_5d__24_1241);
	// cells $procmux$52319 $procmux$52292 $procmux$52290
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? value<32>{0u} : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1242) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1242);
	// cells $procmux$52316 $procmux$52313 $procmux$52311
	i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251 = (p_instruction__master_2e__24_21 ? (p_instruction__master_2e__24_21 ? (p_instruction__master_2e_read__ptr.curr ? i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1243 : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_1_5c_data_24_next_5b_31_3a_0_5d__24_1243);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:78
	// cell $flatten\data_master.$eq$tilelink_soc.v:3572$1001
	p_data__master_2e__24_28 = eq_uu<1>(p_data__master_2e_req__size, value<2>{0x2u});
	// cells $procmux$51973 $procmux$51974_CMP0
	p_tl__data__decoder_2e_tl__data__ram____a____valid = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$51365 $procmux$51949 $procmux$51950_CMP0 $procmux$51368 $procmux$51829 $procmux$51830_CMP0
	p_tl__ram__arbiter_2e_bus____a____opcode = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<3>{0x4u} : value<3>{0u})));
	// cells $flatten\core.$or$tilelink_soc.v:1482$163 $flatten\core.$and$tilelink_soc.v:1611$292 $flatten\core.$not$tilelink_soc.v:1610$291 $procmux$52109 $flatten\instruction_master.$and$tilelink_soc.v:4944$1225 $flatten\instruction_master.$logic_not$tilelink_soc.v:4943$1224 $flatten\instruction_master.$and$tilelink_soc.v:4938$1219 $flatten\instruction_master.$logic_not$tilelink_soc.v:4929$1210
	p_core_2e__24_40 = or_uu<1>(and_uu<1>(p_core_2e_f__arbitration____valid.curr, not_u<1>((p_instruction__master_2e_send__ptr.curr ? and_uu<1>(logic_not<1>(p_instruction__master_2e_state_24_5.curr), p_instruction__master_2e_bus____a____ready) : and_uu<1>(logic_not<1>(p_instruction__master_2e_state.curr), p_instruction__master_2e_bus____a____ready)))), p_core_2e_f__arbitration____halted__by__next);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:3602$1031
	p_data__master_2e__24_346 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:164
	// cell $flatten\data_master.$eq$tilelink_soc.v:3604$1033
	p_data__master_2e__24_36 = eq_uu<1>(p_data__master_2e_bus____d____source, p_data__master_2e_read__ptr.curr);
	// \src: tilelink_soc.v:27016.22-27038.4|/home/michiel/development/riscv-tilelink/tilelink/master/instruction_master.py:95
	// cell $flatten\instruction_master.$eq$tilelink_soc.v:4932$1213
	p_instruction__master_2e__24_25 = eq_uu<1>(p_instruction__master_2e_bus____d____source, p_instruction__master_2e_read__ptr.curr);
	// cells $procmux$52881 $procmux$52878 $procmux$52880_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<31,16>() = (p_data__master_2e__24_26 ? (p_data__master_2e_req__addr.slice<1>().val() ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : (not_u<1>(p_data__master_2e_req__addr.slice<1>().val()) ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<31,16>().val() : value<16>{0u})) : value<16>{0u});
	// cells $procmux$52875 $procmux$52872 $procmux$52874_CMP0
	i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_.slice<15,0>() = (p_data__master_2e__24_26 ? (p_data__master_2e_req__addr.slice<1>().val() ? i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_.slice<15,0>().val() : (not_u<1>(p_data__master_2e_req__addr.slice<1>().val()) ? p_core_2e_m__rs2__value.curr.slice<15,0>().val() : value<16>{0u})) : value<16>{0u});
	// connection
	p_data__master_2e__24_344 = p_data__master_2e_bus____d____valid;
	// connection
	p_data__master_2e__24_34 = p_data__master_2e_bus____d____valid;
	// connection
	p_instruction__master_2e__24_23 = p_instruction__master_2e_bus____d____valid;
	// cells $procmux$51296 $procmux$51299
	p_tl__ram__arbiter_2e_bus____a____valid = (p_tl__ram__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__ram____a____valid : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__ram____a____valid));
	// cells $procmux$53519 $procmux$53520_CMP0 $procmux$53521_CMP0 $procmux$53522_CMP0 $procmux$53523_CMP0 $procmux$53524_CMP0 $procmux$53525_CMP0 $procmux$53526_CMP0 $procmux$53527_CMP0 $flatten\core.$and$tilelink_soc.v:1432$113 $flatten\core.$or$tilelink_soc.v:1431$112 $procmux$53505 $procmux$53506_CMP0 $procmux$53503 $flatten\core.$sshr$tilelink_soc.v:1429$110 $flatten\core.$sshr$tilelink_soc.v:1430$111 $flatten\core.$xor$tilelink_soc.v:1427$108 $flatten\core.$pos$tilelink_soc.v:1426$107 $flatten\core.$extend$tilelink_soc.v:1426$106 $flatten\core.$lt$tilelink_soc.v:1425$105 $flatten\core.$pos$tilelink_soc.v:1424$104 $flatten\core.$extend$tilelink_soc.v:1424$103 $flatten\core.$lt$tilelink_soc.v:1423$102 $flatten\core.$sshl$tilelink_soc.v:1422$101 $procmux$53517 $procmux$53518_CMP0 $procmux$53515 $flatten\core.$sub$tilelink_soc.v:1420$99 $flatten\core.$add$tilelink_soc.v:1421$100
	p_core_2e_x__alu__result = (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x7u}) ? and_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x6u}) ? or_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x5u}) ? (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x5u}) ? (p_core_2e_alu__mode__switch_24_178.curr ? sshr_su<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()) : sshr_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val())) : value<32>{0u}) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x4u}) ? xor_uu<32>(p_core_2e_x__alu__left, p_core_2e_x__alu__right) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x3u}) ? pos_u<32>(pos_u<32>(lt_uu<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x2u}) ? pos_u<32>(pos_u<32>(lt_ss<1>(p_core_2e_x__alu__left, p_core_2e_x__alu__right))) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x1u}) ? sshl_uu<63>(p_core_2e_x__alu__left, p_core_2e_x__alu__right.slice<4,0>().val()).slice<31,0>().val() : (logic_not<1>(p_core_2e_alu__operation_24_177.curr) ? (logic_not<1>(p_core_2e_alu__operation_24_177.curr) ? (p_core_2e_alu__mode__switch_24_178.curr ? sub_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val() : add_uu<33>(p_core_2e_x__alu__left, p_core_2e_x__alu__right).slice<31,0>().val()) : value<32>{0u}) : value<32>{0u}))))))));
	// connection
	p_core_2e_a__arbitration____halted = p_core_2e__24_40;
	// connection
	p_tl__ram_2e_bus____a____opcode = p_tl__ram__arbiter_2e_bus____a____opcode;
	// cells $procmux$51824 $procmux$51825_CMP0
	p_tl__instr__decoder_2e_tl__instr__rom____a____valid = (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_bus____a____valid : value<1>{0u});
	// cells $procmux$51582 $procmux$51579 $procmux$51577 $procmux$51578_CMP0
	i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1549 = (p_tl__periph_2e__24_23 ? (p_tl__periph_2e__24_23 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1547) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_1_5c_output__valid_24_next_5b_0_3a_0_5d__24_1547);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7239$1498 $flatten\tl_periph.$and$tilelink_soc.v:7238$1497 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7237$1496 $flatten\tl_periph.$logic_not$tilelink_soc.v:7235$1494 $flatten\tl_periph.$eq$tilelink_soc.v:7236$1495 $flatten\tl_periph.$and$tilelink_soc.v:7234$1493
	p_tl__periph_2e__24_35 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// cells $procmux$51940 $procmux$51941_CMP0
	p_tl__data__decoder_2e_tl__data__rom____a____valid = (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____valid : value<1>{0u});
	// connection
	p_core_2e_f__arbitration____halted = p_core_2e__24_40;
	// connection
	p_core_2e_x__arbitration____halted = p_core_2e__24_272;
	// cells $procmux$52979 $flatten\core.$and$tilelink_soc.v:1464$145 $flatten\core.$and$tilelink_soc.v:1463$144 $flatten\core.$not$tilelink_soc.v:1462$143
	p_core_2e_a__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_tl__ram_2e_bus____a____valid = p_tl__ram__arbiter_2e_bus____a____valid;
	// connection
	p_tl__ram_2e_bus____a____ready = i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y;
	// cells $procmux$51398 $procmux$51964 $procmux$51965_CMP0 $procmux$51401 $procmux$51844 $procmux$51845_CMP0
	p_tl__ram__arbiter_2e_bus____a____mask = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<4>{0xfu} : value<4>{0u})));
	// cells $procmux$52988 $flatten\core.$and$tilelink_soc.v:1473$154 $flatten\core.$and$tilelink_soc.v:1472$153 $flatten\core.$not$tilelink_soc.v:1471$152
	p_core_2e_x__arbitration____remove = (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? value<1>{0x1u} : value<1>{0u});
	// connection
	p_core_2e_x__rs1__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1417_24_96__Y;
	// connection
	p_core_2e_x__rs2__value = i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1419_24_98__Y;
	// connection
	p_data__master_2e_bus____a____source = p_data__master_2e_send__ptr.curr;
	// connection
	p_data__master_2e_bus____a____size = p_core_2e_mem__size_24_309.curr;
	// cells $procmux$52416 $procmux$52869 $procmux$52866 $procmux$52884
	p_data__master_2e_bus____a____data = (p_data__master_2e_req__we ? (p_data__master_2e__24_28 ? (p_data__master_2e__24_28 ? p_core_2e_m__rs2__value.curr : value<32>{0u}) : (p_data__master_2e__24_26 ? i_flatten_5c_data__master_2e__24_4_5c_data_5b_31_3a_0_5d_ : i_flatten_5c_data__master_2e__24_1_5c_data_5b_31_3a_0_5d_)) : value<32>{0u});
	// cells $procmux$51073 $procmux$51076
	p_tl__rom__arbiter_2e_bus____a____valid = (p_tl__rom__arbiter_2e_rr__grant ? p_tl__data__decoder_2e_tl__data__rom____a____valid : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : p_tl__instr__decoder_2e_tl__instr__rom____a____valid));
	// connection
	p_tl__ram__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__ram____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__ram____a____valid).val();
	// connection
	p_tl__rom__arbiter_2e_rr_2e_requests = p_tl__data__decoder_2e_tl__data__rom____a____valid.concat(p_tl__instr__decoder_2e_tl__instr__rom____a____valid).val();
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:3609$1038
	p_data__master_2e__24_47 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:3608$1037
	p_data__master_2e__24_44 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// \src: tilelink_soc.v:26988.15-27015.4|/home/michiel/development/riscv-tilelink/tilelink/master/data_master.py:108
	// cell $flatten\data_master.$and$tilelink_soc.v:3607$1036
	p_data__master_2e__24_41 = and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready);
	// cells $procmux$51985 $procmux$51986_CMP0
	p_tl__data__decoder_2e_bus____a____source = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____source : value<1>{0u});
	// cells $procmux$51982 $procmux$51983_CMP0
	p_tl__data__decoder_2e_bus____a____size = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____size : value<2>{0u});
	// cells $procmux$51994 $procmux$51995_CMP0
	p_tl__data__decoder_2e_bus____a____data = (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,4>().val(), value<28>{0x8000000u}) ? p_data__master_2e_bus____a____data : value<32>{0u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7205$1462 $flatten\tl_periph.$and$tilelink_soc.v:7204$1461 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7203$1460 $flatten\tl_periph.$logic_not$tilelink_soc.v:7201$1458 $flatten\tl_periph.$eq$tilelink_soc.v:7202$1459 $flatten\tl_periph.$and$tilelink_soc.v:7200$1457
	p_tl__periph_2e__24_158 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7179$1436 $flatten\tl_periph.$and$tilelink_soc.v:7178$1435 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7177$1434 $flatten\tl_periph.$logic_not$tilelink_soc.v:7175$1432 $flatten\tl_periph.$eq$tilelink_soc.v:7176$1433 $flatten\tl_periph.$and$tilelink_soc.v:7174$1431
	p_tl__periph_2e__24_110 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// \src: tilelink_soc.v:27178.13-27201.4|/home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:29
	// cell $flatten\tl_periph.$add$tilelink_soc.v:7247$1506
	i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y = add_uu<65>(p_tl__periph_2e_cycle__count.curr, value<1>{0x1u});
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7253$1512 $flatten\tl_periph.$and$tilelink_soc.v:7252$1511 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7251$1510 $flatten\tl_periph.$logic_not$tilelink_soc.v:7249$1508 $flatten\tl_periph.$eq$tilelink_soc.v:7250$1509 $flatten\tl_periph.$and$tilelink_soc.v:7248$1507
	p_tl__periph_2e__24_62 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7260$1519 $flatten\tl_periph.$and$tilelink_soc.v:7259$1518 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7258$1517 $flatten\tl_periph.$logic_not$tilelink_soc.v:7255$1514 $flatten\tl_periph.$eq$tilelink_soc.v:7257$1516 $flatten\tl_periph.$and$tilelink_soc.v:7254$1513
	p_tl__periph_2e__24_74 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7267$1526 $flatten\tl_periph.$and$tilelink_soc.v:7266$1525 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7265$1524 $flatten\tl_periph.$logic_not$tilelink_soc.v:7263$1522 $flatten\tl_periph.$eq$tilelink_soc.v:7264$1523 $flatten\tl_periph.$and$tilelink_soc.v:7261$1520
	p_tl__periph_2e__24_86 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<2>().val());
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7273$1532 $flatten\tl_periph.$and$tilelink_soc.v:7272$1531 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7271$1530 $flatten\tl_periph.$logic_not$tilelink_soc.v:7269$1528 $flatten\tl_periph.$eq$tilelink_soc.v:7270$1529 $flatten\tl_periph.$and$tilelink_soc.v:7268$1527
	p_tl__periph_2e__24_98 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// cells $procmux$51573 $procmux$51570 $procmux$51568 $procmux$51569_CMP0
	i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1551 = (p_tl__periph_2e__24_35 ? (p_tl__periph_2e__24_35 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1549) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_3_5c_output__valid_24_next_5b_0_3a_0_5d__24_1549);
	// cells $flatten\tl_periph.$and$tilelink_soc.v:7245$1504 $flatten\tl_periph.$and$tilelink_soc.v:7244$1503 $flatten\tl_periph.$reduce_or$tilelink_soc.v:7243$1502 $flatten\tl_periph.$logic_not$tilelink_soc.v:7241$1500 $flatten\tl_periph.$eq$tilelink_soc.v:7242$1501 $flatten\tl_periph.$and$tilelink_soc.v:7240$1499
	p_tl__periph_2e__24_47 = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__periph_2e_bus____a____valid, p_tl__periph_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__periph_2e_bus____a____opcode)).val())), p_tl__periph_2e_bus____a____mask.slice<3>().val());
	// connection
	p_tl__ram_2e_bus____a____mask = p_tl__ram__arbiter_2e_bus____a____mask;
	// cells $procmux$51169 $procmux$52096 $procmux$52097_CMP0 $procmux$51172 $procmux$51921 $procmux$51922_CMP0
	p_tl__rom__arbiter_2e_bus____a____address = (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// cells $procmux$51392 $procmux$51961 $procmux$51962_CMP0 $procmux$51395 $procmux$51841 $procmux$51842_CMP0
	p_tl__ram__arbiter_2e_bus____a____address = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____address.slice<14,0>().val() : value<15>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<15>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_core_2e_f__program__counter.curr.slice<14,0>().val() : value<15>{0u})));
	// cells $procmux$53529 $procmux$53530_CMP0 $procmux$53531_CMP0 $procmux$53532_CMP0 $procmux$53533_CMP0 $flatten\core.$mul$tilelink_soc.v:1436$117 $flatten\core.$mul$tilelink_soc.v:1435$116 $flatten\core.$mul$tilelink_soc.v:1434$115 $flatten\core.$mul$tilelink_soc.v:1433$114
	p_core_2e_x__muldiv__intermediate = (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x3u}) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x2u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x1u}) ? mul_ss<64>(p_core_2e_x__rs1__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs1__value).val(), p_core_2e_x__rs2__value.slice<31>().val().repeat<32>().concat(p_core_2e_x__rs2__value).val()) : (logic_not<1>(p_core_2e_alu__operation_24_177.curr) ? mul_uu<64>(p_core_2e_x__rs1__value, p_core_2e_x__rs2__value) : value<64>{0u,0u}))));
	// connection
	p_tl__rom_2e_bus____a____ready = i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y;
	// cells $flatten\core.$and$tilelink_soc.v:1403$82 $flatten\core.$not$tilelink_soc.v:1402$81 $flatten\core.$not$tilelink_soc.v:1401$80
	p_core_2e__24_191 = and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove));
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51817_CMP0
	i_procmux_24_51817__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51817_CMP1
	i_procmux_24_51817__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51800_CMP0
	i_procmux_24_51800__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51800_CMP1
	i_procmux_24_51800__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51783_CMP0
	i_procmux_24_51783__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51783_CMP1
	i_procmux_24_51783__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51766_CMP0
	i_procmux_24_51766__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51766_CMP1
	i_procmux_24_51766__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51704_CMP0
	i_procmux_24_51704__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51704_CMP1
	i_procmux_24_51704__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51687_CMP0
	i_procmux_24_51687__CMP.slice<0>() = logic_not<1>(p_tl__periph_2e_bus____a____opcode);
	// \full_case: 1
	// \src: /home/michiel/development/riscv-tilelink/tilelink/peripheral/simulation.py:58
	// cell $procmux$51687_CMP1
	i_procmux_24_51687__CMP.slice<1>() = eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x1u});
	// cells $procmux$51404 $procmux$51967 $procmux$51968_CMP0
	p_tl__ram__arbiter_2e_bus____a____data = (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u});
	// cells $flatten\core.$and$tilelink_soc.v:1499$180 $flatten\core.$and$tilelink_soc.v:1498$179 $flatten\core.$not$tilelink_soc.v:1497$178
	p_core_2e_register__file__w__en = and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, not_u<1>(p_core_2e_w__arbitration____halted)), p_core_2e_register__write_24_443.curr);
	// cells $flatten\tl_ram.$and$tilelink_soc.v:16128$9863 $flatten\tl_ram.$and$tilelink_soc.v:16127$9862 $flatten\tl_ram.$reduce_or$tilelink_soc.v:16126$9861 $flatten\tl_ram.$logic_not$tilelink_soc.v:16151$9886 $flatten\tl_ram.$eq$tilelink_soc.v:16125$9860 $flatten\tl_ram.$and$tilelink_soc.v:16147$9882
	p_tl__ram_2e_memory__w__en.slice<0>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<0>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:16134$9869 $flatten\tl_ram.$and$tilelink_soc.v:16133$9868 $flatten\tl_ram.$reduce_or$tilelink_soc.v:16132$9867 $flatten\tl_ram.$logic_not$tilelink_soc.v:16130$9865 $flatten\tl_ram.$eq$tilelink_soc.v:16131$9866 $flatten\tl_ram.$and$tilelink_soc.v:16129$9864
	p_tl__ram_2e_memory__w__en.slice<1>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<1>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:16141$9876 $flatten\tl_ram.$and$tilelink_soc.v:16140$9875 $flatten\tl_ram.$reduce_or$tilelink_soc.v:16139$9874 $flatten\tl_ram.$logic_not$tilelink_soc.v:16137$9872 $flatten\tl_ram.$eq$tilelink_soc.v:16138$9873 $flatten\tl_ram.$and$tilelink_soc.v:16135$9870
	p_tl__ram_2e_memory__w__en.slice<2>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<2>().val());
	// cells $flatten\tl_ram.$and$tilelink_soc.v:16148$9883 $flatten\tl_ram.$and$tilelink_soc.v:16146$9881 $flatten\tl_ram.$reduce_or$tilelink_soc.v:16145$9880 $flatten\tl_ram.$logic_not$tilelink_soc.v:16143$9878 $flatten\tl_ram.$eq$tilelink_soc.v:16144$9879 $flatten\tl_ram.$and$tilelink_soc.v:16142$9877
	p_tl__ram_2e_memory__w__en.slice<3>() = and_uu<1>(and_uu<1>(and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready), reduce_or<1>(eq_uu<1>(p_tl__ram_2e_bus____a____opcode, value<1>{0x1u}).concat(logic_not<1>(p_tl__ram_2e_bus____a____opcode)).val())), p_tl__ram_2e_bus____a____mask.slice<3>().val());
	// connection
	p_core_2e_rst = p_rst;
	// connection
	p_data__master_2e_rst = p_rst;
	// connection
	p_instruction__master_2e_rst = p_rst;
	// connection
	p_tl__periph_2e_rst = p_rst;
	// connection
	p_tl__ram_2e_rst = p_rst;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_rst = p_rst;
	// connection
	p_tl__rom_2e_rst = p_rst;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_rst = p_rst;
	// \full_case: 1
	// \src: tilelink_soc.v:1350.5-1351.67
	// cell $procmux$52939
	i_procmux_24_52939__Y = (p_core_2e_register__file__w__en ? p_core_2e_rd_24_431.curr : value<5>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:1350.5-1351.67
	// cell $procmux$52936
	i_procmux_24_52936__Y = (p_core_2e_register__file__w__en ? p_core_2e_w__write__data : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:1350.5-1351.67
	// cell $procmux$52933
	i_procmux_24_52933__Y = (p_core_2e_register__file__w__en ? value<32>{0xffffffffu} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16109.5-16110.56
	// cell $procmux$51463
	i_procmux_24_51463__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16109.5-16110.56
	// cell $procmux$51460
	i_procmux_24_51460__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? value<24>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<7,0>()).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16109.5-16110.56
	// cell $procmux$51457
	i_procmux_24_51457__Y = (p_tl__ram_2e_memory__w__en.slice<0>().val() ? value<32>{0xffu} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16111.5-16112.58
	// cell $procmux$51454
	i_procmux_24_51454__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16111.5-16112.58
	// cell $procmux$51451
	i_procmux_24_51451__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? value<16>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<15,8>()).concat(value<8>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16111.5-16112.58
	// cell $procmux$51448
	i_procmux_24_51448__Y = (p_tl__ram_2e_memory__w__en.slice<1>().val() ? value<32>{0xff00u} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16113.5-16114.60
	// cell $procmux$51445
	i_procmux_24_51445__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16113.5-16114.60
	// cell $procmux$51442
	i_procmux_24_51442__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? value<8>{0u}.concat(p_tl__ram__arbiter_2e_bus____a____data.slice<23,16>()).concat(value<16>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16113.5-16114.60
	// cell $procmux$51439
	i_procmux_24_51439__Y = (p_tl__ram_2e_memory__w__en.slice<2>().val() ? value<32>{0xff0000u} : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16115.5-16116.60
	// cell $procmux$51436
	i_procmux_24_51436__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val() : value<13>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16115.5-16116.60
	// cell $procmux$51433
	i_procmux_24_51433__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? p_tl__ram__arbiter_2e_bus____a____data.slice<31,24>().concat(value<24>{0u}).val() : value<32>{0u});
	// \full_case: 1
	// \src: tilelink_soc.v:16115.5-16116.60
	// cell $procmux$51430
	i_procmux_24_51430__Y = (p_tl__ram_2e_memory__w__en.slice<3>().val() ? value<32>{0xff000000u} : value<32>{0u});
	// \src: tilelink_soc.v:27286.10-27308.4|tilelink_soc.v:25329.14-25329.20
	// memory \tl_rom.memory read port 0
	auto tmp_0 = memory_index(p_tl__rom__arbiter_2e_bus____a____address.slice<14,2>().val(), 0, 8192);
	CXXRTL_ASSERT(tmp_0.valid && "out of bounds read");
	if(tmp_0.valid) {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_25329_24_34574__DATA = memory_p_tl__rom_2e_memory[tmp_0.index];
	} else {
		i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_25329_24_34574__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16121.14-16121.20
	// memory \tl_ram.memory read port 0
	auto tmp_1 = memory_index(p_tl__ram__arbiter_2e_bus____a____address.slice<14,2>().val(), 0, 8192);
	CXXRTL_ASSERT(tmp_1.valid && "out of bounds read");
	if(tmp_1.valid) {
		value<32> tmp_2 = memory_p_tl__ram_2e_memory[tmp_1.index];
		i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_16121_24_9859__DATA = tmp_2;
	} else {
		i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_16121_24_9859__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1357.14-1357.27
	// memory \core.register_file read port 0
	auto tmp_3 = memory_index(p_core_2e_rs1, 0, 32);
	CXXRTL_ASSERT(tmp_3.valid && "out of bounds read");
	if(tmp_3.valid) {
		value<32> tmp_4 = memory_p_core_2e_register__file[tmp_3.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1357_24_42__DATA = tmp_4;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1357_24_42__DATA = value<32> {};
	}
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1360.14-1360.27
	// memory \core.register_file read port 1
	auto tmp_5 = memory_index(p_core_2e_rs2, 0, 32);
	CXXRTL_ASSERT(tmp_5.valid && "out of bounds read");
	if(tmp_5.valid) {
		value<32> tmp_6 = memory_p_core_2e_register__file[tmp_5.index];
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1360_24_43__DATA = tmp_6;
	} else {
		i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1360_24_43__DATA = value<32> {};
	}
	// connection
	p_core_2e_clk = p_clk;
	// connection
	p_tl__ram_2e_clk = p_clk;
	// connection
	p_tl__rom__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__rom_2e_clk = p_clk;
	// connection
	p_tl__ram__arbiter_2e_rr_2e_clk = p_clk;
	// connection
	p_tl__periph_2e_clk = p_clk;
	// connection
	p_instruction__master_2e_clk = p_clk;
	// connection
	p_data__master_2e_clk = p_clk;
	// \src: tilelink_soc.v:1351.7-1351.66
	// memory \core.register_file write port 0
	if (posedge_p_clk) {
		auto tmp_7 = memory_index(i_procmux_24_52939__Y, 0, 32);
		CXXRTL_ASSERT(tmp_7.valid && "out of bounds write");
		if (tmp_7.valid) {
			memory_p_core_2e_register__file.update(tmp_7.index, i_procmux_24_52936__Y, i_procmux_24_52933__Y, 0);
		}
	}
	// \src: tilelink_soc.v:16110.7-16110.55
	// memory \tl_ram.memory write port 0
	if (posedge_p_clk) {
		auto tmp_8 = memory_index(i_procmux_24_51463__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_8.valid && "out of bounds write");
		if (tmp_8.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_8.index, i_procmux_24_51460__Y, i_procmux_24_51457__Y, 0);
		}
	}
	// \src: tilelink_soc.v:16112.7-16112.57
	// memory \tl_ram.memory write port 1
	if (posedge_p_clk) {
		auto tmp_9 = memory_index(i_procmux_24_51454__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_9.valid && "out of bounds write");
		if (tmp_9.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_9.index, i_procmux_24_51451__Y, i_procmux_24_51448__Y, 1);
		}
	}
	// \src: tilelink_soc.v:16114.7-16114.59
	// memory \tl_ram.memory write port 2
	if (posedge_p_clk) {
		auto tmp_10 = memory_index(i_procmux_24_51445__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_10.valid && "out of bounds write");
		if (tmp_10.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_10.index, i_procmux_24_51442__Y, i_procmux_24_51439__Y, 2);
		}
	}
	// \src: tilelink_soc.v:16116.7-16116.59
	// memory \tl_ram.memory write port 3
	if (posedge_p_clk) {
		auto tmp_11 = memory_index(i_procmux_24_51436__Y, 0, 8192);
		CXXRTL_ASSERT(tmp_11.valid && "out of bounds write");
		if (tmp_11.valid) {
			memory_p_tl__ram_2e_memory.update(tmp_11.index, i_procmux_24_51433__Y, i_procmux_24_51430__Y, 3);
		}
	}
	// cells $procdff$53903 $procmux$53045 $procmux$53102
	if (posedge_p_clk) {
		p_core_2e_alu__right__select_24_436.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_alu__right__select_24_436.curr : p_core_2e_alu__right__select_24_304.curr));
	}
	// cells $procdff$53904 $procmux$53042 $procmux$53099
	if (posedge_p_clk) {
		p_core_2e_branch__mode_24_437.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_branch__mode_24_437.curr : p_core_2e_branch__mode_24_305.curr));
	}
	// cells $procdff$53914 $procmux$52991 $procmux$52994 $procmux$52997
	if (posedge_p_clk) {
		p_core_2e_w__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_w__arbitration____valid.curr : value<1>{0u}) : p_core_2e_m__arbitration____valid.curr));
	}
	// cells $procdff$53918 $procmux$52955 $procmux$52958 $procmux$53535 $procmux$53536_CMP0 $procmux$53537_CMP0 $procmux$53538_CMP0 $procmux$53539_CMP0
	if (posedge_p_clk) {
		p_core_2e_m__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__muldiv__result.curr : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x3u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x2u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (eq_uu<1>(p_core_2e_alu__operation_24_177.curr, value<3>{0x1u}) ? p_core_2e_x__muldiv__intermediate.slice<63,32>().val() : (logic_not<1>(p_core_2e_alu__operation_24_177.curr) ? p_core_2e_x__muldiv__intermediate.slice<31,0>().val() : value<32>{0u}))))));
	}
	// cells $procdff$53922 $procmux$53626 $procmux$53659
	if (posedge_p_clk) {
		p_core_2e_rd_24_149.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_rd_24_149.curr : p_core_2e_rd_24_132.curr));
	}
	// cells $procdff$53931 $procmux$53599 $procmux$53653
	if (posedge_p_clk) {
		p_core_2e_mem__we_24_308.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_mem__we_24_308.curr : p_core_2e_mem__we_24_184.curr));
	}
	// cells $procdff$53935 $procmux$53587 $procmux$53644
	if (posedge_p_clk) {
		p_core_2e_writeback__select_24_141.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_writeback__select_24_141.curr : p_core_2e_writeback__select_24_124.curr));
	}
	// cells $procdff$53901 $procmux$53051 $procmux$53108
	if (posedge_p_clk) {
		p_core_2e_alu__mode__switch_24_434.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_alu__mode__switch_24_434.curr : p_core_2e_alu__mode__switch_24_302.curr));
	}
	// cells $procdff$53902 $procmux$53048 $procmux$53111
	if (posedge_p_clk) {
		p_core_2e_alu__left__select_24_435.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_alu__left__select_24_435.curr : p_core_2e_alu__left__select_24_303.curr));
	}
	// cells $procdff$53905 $procmux$53039 $procmux$53096
	if (posedge_p_clk) {
		p_core_2e_branch__type_24_438.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_branch__type_24_438.curr : p_core_2e_branch__type_24_306.curr));
	}
	// cells $procdff$53908 $procmux$53030 $procmux$53084
	if (posedge_p_clk) {
		p_core_2e_mem__size_24_441.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_mem__size_24_441.curr : p_core_2e_mem__size_24_309.curr));
	}
	// cells $procdff$53909 $procmux$53027 $procmux$53081
	if (posedge_p_clk) {
		p_core_2e_mem__unsigned_24_442.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_mem__unsigned_24_442.curr : p_core_2e_mem__unsigned_24_310.curr));
	}
	// cells $procdff$53912 $procmux$53015 $procmux$53018
	if (posedge_p_clk) {
		p_core_2e_w__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_w__instruction.curr : p_core_2e_m__instruction.curr));
	}
	// cells $procdff$53916 $procmux$52967 $procmux$52970 $procmux$53545 $flatten\core.$eq$tilelink_soc.v:1437$118 $procmux$53543 $flatten\core.$eq$tilelink_soc.v:1438$119 $flatten\core.$logic_not$tilelink_soc.v:1441$122 $procmux$53541 $flatten\core.$eq$tilelink_soc.v:1440$121 $flatten\core.$reduce_or$tilelink_soc.v:1442$123
	if (posedge_p_clk) {
		p_core_2e_m__branch__taken.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__branch__taken.curr : (eq_uu<1>(p_core_2e_branch__mode_24_181.curr, value<2>{0x1u}) ? value<1>{0x1u} : (eq_uu<1>(p_core_2e_branch__mode_24_181.curr, value<2>{0x2u}) ? logic_not<1>(p_core_2e_x__alu__result) : (eq_uu<1>(p_core_2e_branch__mode_24_181.curr, value<2>{0x3u}) ? reduce_or<1>(p_core_2e_x__alu__result) : value<1>{0u})))));
	}
	// cells $procdff$53920 $procmux$53632 $procmux$53638
	if (posedge_p_clk) {
		p_core_2e_rs1_24_298.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_rs1_24_298.curr : p_core_2e_rs1_24_174.curr));
	}
	// cells $procdff$53929 $procmux$53605 $procmux$53662
	if (posedge_p_clk) {
		p_core_2e_branch__type_24_306.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_branch__type_24_306.curr : p_core_2e_branch__type_24_182.curr));
	}
	// cells $procdff$53933 $procmux$53593 $procmux$53647
	if (posedge_p_clk) {
		p_core_2e_mem__unsigned_24_310.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_mem__unsigned_24_310.curr : p_core_2e_mem__unsigned_24_186.curr));
	}
	// cells $procdff$53906 $procmux$53036 $procmux$53090
	if (posedge_p_clk) {
		p_core_2e_mem__enable_24_439.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_mem__enable_24_439.curr : p_core_2e_mem__enable_24_307.curr));
	}
	// cells $procdff$53907 $procmux$53033 $procmux$53087
	if (posedge_p_clk) {
		p_core_2e_mem__we_24_440.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_mem__we_24_440.curr : p_core_2e_mem__we_24_308.curr));
	}
	// cells $procdff$53910 $procmux$53024 $procmux$53075
	if (posedge_p_clk) {
		p_core_2e_register__write_24_443.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_register__write_24_443.curr : p_core_2e_register__write_24_146.curr));
	}
	// cells $procdff$53911 $procmux$53021 $procmux$53078
	if (posedge_p_clk) {
		p_core_2e_writeback__select_24_444.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_writeback__select_24_444.curr : p_core_2e_writeback__select_24_141.curr));
	}
	// cells $procdff$53913 $procmux$53009 $procmux$53012
	if (posedge_p_clk) {
		p_core_2e_w__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_w__program__counter.curr : p_core_2e_m__program__counter.curr));
	}
	// cells $procdff$53915 $procmux$52973 $procmux$52976 $procmux$53547 $procmux$53549_CMP0 $flatten\core.$add$tilelink_soc.v:1444$125 $flatten\core.$add$tilelink_soc.v:1443$124
	if (posedge_p_clk) {
		p_core_2e_m__branch__target.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__branch__target.curr : (p_core_2e_branch__type_24_182.curr ? add_uu<33>(p_core_2e_x__rs1__value, p_core_2e_immediate_24_176.curr).slice<31,0>().val() : (not_u<1>(p_core_2e_branch__type_24_182.curr) ? add_uu<33>(p_core_2e_x__program__counter.curr, p_core_2e_immediate_24_176.curr).slice<31,0>().val() : value<32>{0u}))));
	}
	// cells $procdff$53917 $procmux$52961 $procmux$52964
	if (posedge_p_clk) {
		p_core_2e_m__rs2__value.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__rs2__value.curr : i_flatten_5c_core_2e__24_ternary_24_tilelink__soc_2e_v_3a_1419_24_98__Y));
	}
	// cells $procdff$53919 $procmux$52949 $procmux$52952
	if (posedge_p_clk) {
		p_core_2e_m__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__alu__result.curr : p_core_2e_x__alu__result));
	}
	// cells $procdff$53921 $procmux$53629 $procmux$53635
	if (posedge_p_clk) {
		p_core_2e_rs2_24_299.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_rs2_24_299.curr : p_core_2e_rs2_24_175.curr));
	}
	// cells $procdff$53923 $procmux$53623 $procmux$53671
	if (posedge_p_clk) {
		p_core_2e_immediate_24_300.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_immediate_24_300.curr : p_core_2e_immediate_24_176.curr));
	}
	// cells $procdff$53924 $procmux$53620 $procmux$53680
	if (posedge_p_clk) {
		p_core_2e_alu__operation_24_301.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_alu__operation_24_301.curr : p_core_2e_alu__operation_24_177.curr));
	}
	// cells $procdff$53925 $procmux$53617 $procmux$53674
	if (posedge_p_clk) {
		p_core_2e_alu__mode__switch_24_302.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_alu__mode__switch_24_302.curr : p_core_2e_alu__mode__switch_24_178.curr));
	}
	// cells $procdff$53926 $procmux$53614 $procmux$53677
	if (posedge_p_clk) {
		p_core_2e_alu__left__select_24_303.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_alu__left__select_24_303.curr : p_core_2e_alu__left__select_24_179.curr));
	}
	// cells $procdff$53927 $procmux$53611 $procmux$53668
	if (posedge_p_clk) {
		p_core_2e_alu__right__select_24_304.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_alu__right__select_24_304.curr : p_core_2e_alu__right__select_24_180.curr));
	}
	// cells $procdff$53928 $procmux$53608 $procmux$53665
	if (posedge_p_clk) {
		p_core_2e_branch__mode_24_305.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_branch__mode_24_305.curr : p_core_2e_branch__mode_24_181.curr));
	}
	// cells $procdff$53930 $procmux$53602 $procmux$53656
	if (posedge_p_clk) {
		p_core_2e_mem__enable_24_307.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_mem__enable_24_307.curr : p_core_2e_mem__enable_24_183.curr));
	}
	// cells $procdff$53932 $procmux$53596 $procmux$53650
	if (posedge_p_clk) {
		p_core_2e_mem__size_24_309.next = (p_core_2e_rst ? value<2>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_mem__size_24_309.curr : p_core_2e_mem__size_24_185.curr));
	}
	// cells $procdff$53934 $procmux$53590 $procmux$53641
	if (posedge_p_clk) {
		p_core_2e_register__write_24_146.next = (p_core_2e_rst ? value<1>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_register__write_24_146.curr : p_core_2e_register__write_24_129.curr));
	}
	// cells $procdff$53936 $procmux$53581 $procmux$53584
	if (posedge_p_clk) {
		p_core_2e_m__instruction.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__instruction.curr : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$53788 $procmux$51190 $procmux$51203 $procmux$51205_CMP0 $procmux$51195 $procmux$51193 $procmux$51201 $procmux$51199
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_grant.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? (p_tl__rom__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__rom__arbiter_2e_rr_2e_grant.curr) ? (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__rom__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__rom__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$53789 $procmux$51187 $flatten\tl_rom_arbiter.\rr.$reduce_or$tilelink_soc.v:5324$1330
	if (posedge_p_clk) {
		p_tl__rom__arbiter_2e_rr_2e_valid.next = (p_tl__rom__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__rom__arbiter_2e_rr_2e_requests));
	}
	// cells $procdff$53790 $procmux$51206 $flatten\tl_rom.$and$tilelink_soc.v:25333$34575
	if (posedge_p_clk) {
		p_tl__rom_2e___0__.next = (and_uu<1>(p_tl__rom__arbiter_2e_bus____a____valid, p_tl__rom_2e_bus____a____ready) ? i_flatten_5c_tl__rom_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_25329_24_34574__DATA : p_tl__rom_2e___0__.curr);
	}
	// cells $procdff$53791 $procmux$51236 $procmux$51251 $procmux$51142 $procmux$52081 $procmux$52082_CMP0 $procmux$51145 $procmux$51907 $procmux$51908_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____opcode.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____opcode : value<3>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<3>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<3>{0x4u} : value<3>{0u}))) : p_tl__rom_2e_last__a____opcode.curr));
	}
	// cells $procdff$53792 $procmux$51233 $procmux$51248
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____param.next = (p_tl__rom_2e_rst ? value<3>{0u} : (p_tl__rom_2e_bus____a____ready ? value<3>{0u} : p_tl__rom_2e_last__a____param.curr));
	}
	// cells $procdff$53793 $procmux$51230 $procmux$51242 $procmux$51157 $procmux$52090 $procmux$52091_CMP0 $procmux$51160 $procmux$51915 $procmux$51916_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____size.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__rom_2e_last__a____size.curr));
	}
	// cells $procdff$53794 $procmux$51227 $procmux$51239 $procmux$51163 $procmux$52093 $procmux$52094_CMP0 $procmux$51166 $procmux$51918 $procmux$51919_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____source.next = (p_tl__rom_2e_rst ? value<2>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__rom_2e_last__a____source.curr));
	}
	// cells $procdff$53795 $procmux$51224 $procmux$51263
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____address.next = (p_tl__rom_2e_rst ? value<15>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____address : p_tl__rom_2e_last__a____address.curr));
	}
	// cells $procdff$53796 $procmux$51221 $procmux$51254 $procmux$51175 $procmux$52099 $procmux$52100_CMP0 $procmux$51178 $procmux$51924 $procmux$51925_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____mask.next = (p_tl__rom_2e_rst ? value<4>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____mask : value<4>{0u}) : (p_tl__rom__arbiter_2e_rr_2e_grant.curr ? value<4>{0u} : (logic_not<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val()) ? value<4>{0xfu} : value<4>{0u}))) : p_tl__rom_2e_last__a____mask.curr));
	}
	// cells $procdff$53797 $procmux$51218 $procmux$51266 $procmux$51181 $procmux$51943 $procmux$51944_CMP0
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____data.next = (p_tl__rom_2e_rst ? value<32>{0u} : (p_tl__rom_2e_bus____a____ready ? (p_tl__rom__arbiter_2e_rr__grant ? (logic_not<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val()) ? p_data__master_2e_bus____a____data : value<32>{0u}) : value<32>{0u}) : p_tl__rom_2e_last__a____data.curr));
	}
	// cells $procdff$53798 $procmux$51215 $procmux$51257
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____corrupt.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? value<1>{0u} : p_tl__rom_2e_last__a____corrupt.curr));
	}
	// cells $procdff$53799 $procmux$51212 $procmux$51245
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____valid.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? p_tl__rom__arbiter_2e_bus____a____valid : p_tl__rom_2e_last__a____valid.curr));
	}
	// cells $procdff$53800 $procmux$51209 $procmux$51260
	if (posedge_p_clk) {
		p_tl__rom_2e_last__a____ready.next = (p_tl__rom_2e_rst ? value<1>{0u} : (p_tl__rom_2e_bus____a____ready ? i_flatten_5c_tl__rom_2e__24_or_24_tilelink__soc_2e_v_3a_25335_24_34577__Y : p_tl__rom_2e_last__a____ready.curr));
	}
	// cells $procdff$53801 $procmux$51413 $procmux$51426 $procmux$51428_CMP0 $procmux$51418 $procmux$51416 $procmux$51424 $procmux$51422
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_grant.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? (p_tl__ram__arbiter_2e_rr_2e_requests.slice<0>().val() ? value<1>{0u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr) : value<1>{0u}) : (not_u<1>(p_tl__ram__arbiter_2e_rr_2e_grant.curr) ? (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<1>{0u} : (p_tl__ram__arbiter_2e_rr_2e_requests.slice<1>().val() ? value<1>{0x1u} : p_tl__ram__arbiter_2e_rr_2e_grant.curr)) : value<1>{0u})));
	}
	// cells $procdff$53802 $procmux$51410 $flatten\tl_ram_arbiter.\rr.$reduce_or$tilelink_soc.v:5390$1345
	if (posedge_p_clk) {
		p_tl__ram__arbiter_2e_rr_2e_valid.next = (p_tl__ram__arbiter_2e_rr_2e_rst ? value<1>{0u} : reduce_or<1>(p_tl__ram__arbiter_2e_rr_2e_requests));
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53803
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__ADDR.next = i_procmux_24_51463__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53804
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__DATA.next = i_procmux_24_51460__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53805
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__EN.next = i_procmux_24_51457__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53806
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__ADDR.next = i_procmux_24_51454__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53807
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__DATA.next = i_procmux_24_51451__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53808
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__EN.next = i_procmux_24_51448__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53809
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__ADDR.next = i_procmux_24_51445__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53810
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__DATA.next = i_procmux_24_51442__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53811
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__EN.next = i_procmux_24_51439__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53812
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__ADDR.next = i_procmux_24_51436__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53813
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__DATA.next = i_procmux_24_51433__Y;
	}
	// \src: tilelink_soc.v:27202.10-27224.4|tilelink_soc.v:16108.3-16117.6
	// cell $procdff$53814
	if (posedge_p_clk) {
		i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__EN.next = i_procmux_24_51430__Y;
	}
	// cells $procdff$53815 $procmux$51465 $flatten\tl_ram.$and$tilelink_soc.v:16136$9871
	if (posedge_p_clk) {
		p_tl__ram_2e___0__.next = (and_uu<1>(p_tl__ram_2e_bus____a____valid, p_tl__ram_2e_bus____a____ready) ? i_flatten_5c_tl__ram_2e__24_memrd_24__5c_memory_24_tilelink__soc_2e_v_3a_16121_24_9859__DATA : p_tl__ram_2e___0__.curr);
	}
	// cells $procdff$53816 $procmux$51495 $procmux$51510
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____opcode.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____opcode : p_tl__ram_2e_last__a____opcode.curr));
	}
	// cells $procdff$53817 $procmux$51492 $procmux$51507
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____param.next = (p_tl__ram_2e_rst ? value<3>{0u} : (p_tl__ram_2e_bus____a____ready ? value<3>{0u} : p_tl__ram_2e_last__a____param.curr));
	}
	// cells $procdff$53818 $procmux$51489 $procmux$51501 $procmux$51380 $procmux$51955 $procmux$51956_CMP0 $procmux$51383 $procmux$51835 $procmux$51836_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____size.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? (eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____size : value<2>{0u}) : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : (eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? value<2>{0x2u} : value<2>{0u}))) : p_tl__ram_2e_last__a____size.curr));
	}
	// cells $procdff$53819 $procmux$51486 $procmux$51498 $procmux$51386 $procmux$51958 $procmux$51959_CMP0 $procmux$51389 $procmux$51838 $procmux$51839_CMP0
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____source.next = (p_tl__ram_2e_rst ? value<2>{0u} : (p_tl__ram_2e_bus____a____ready ? (p_tl__ram__arbiter_2e_rr__grant ? value<1>{0x1u}.concat((eq_uu<1>(p_tl__data__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_data__master_2e_bus____a____source : value<1>{0u})).val() : (p_tl__ram__arbiter_2e_rr_2e_grant.curr ? value<2>{0u} : value<1>{0u}.concat((eq_uu<1>(p_tl__instr__decoder_2e___bus____a____address.slice<31,15>().val(), value<17>{0x1u}) ? p_instruction__master_2e_send__ptr.curr : value<1>{0u})).val())) : p_tl__ram_2e_last__a____source.curr));
	}
	// cells $procdff$53820 $procmux$51483 $procmux$51522
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____address.next = (p_tl__ram_2e_rst ? value<15>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____address : p_tl__ram_2e_last__a____address.curr));
	}
	// cells $procdff$53821 $procmux$51480 $procmux$51513
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____mask.next = (p_tl__ram_2e_rst ? value<4>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____mask : p_tl__ram_2e_last__a____mask.curr));
	}
	// cells $procdff$53822 $procmux$51477 $procmux$51525
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____data.next = (p_tl__ram_2e_rst ? value<32>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____data : p_tl__ram_2e_last__a____data.curr));
	}
	// cells $procdff$53823 $procmux$51474 $procmux$51516
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____corrupt.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? value<1>{0u} : p_tl__ram_2e_last__a____corrupt.curr));
	}
	// cells $procdff$53824 $procmux$51471 $procmux$51504
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____valid.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? p_tl__ram__arbiter_2e_bus____a____valid : p_tl__ram_2e_last__a____valid.curr));
	}
	// cells $procdff$53825 $procmux$51468 $procmux$51519
	if (posedge_p_clk) {
		p_tl__ram_2e_last__a____ready.next = (p_tl__ram_2e_rst ? value<1>{0u} : (p_tl__ram_2e_bus____a____ready ? i_flatten_5c_tl__ram_2e__24_or_24_tilelink__soc_2e_v_3a_16150_24_9885__Y : p_tl__ram_2e_last__a____ready.curr));
	}
	// cells $procdff$53826 $procmux$51690 $procmux$51703 $procmux$51704_ANY $procmux$51705_CMP0 $procmux$51700 $procmux$51701_CMP0 $procmux$51695 $procmux$51696_CMP0 $procmux$51697_CMP0 $procmux$51698_CMP0 $procmux$51699_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____corrupt.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_51704__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____corrupt.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____corrupt.curr)));
	}
	// cells $procdff$53827 $procmux$51722 $procmux$51731 $procmux$51728 $procmux$51726 $procmux$51727_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output.next = (p_tl__periph_2e_rst ? value<8>{0u} : (p_tl__periph_2e__24_110 ? (p_tl__periph_2e__24_110 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : p_tl__periph_2e_output.curr) : value<8>{0u}) : p_tl__periph_2e_output.curr));
	}
	// cells $procdff$53828 $procmux$51594 $procmux$51670 $procmux$51664 $procmux$51662 $procmux$51663_CMP0 $procmux$51651 $procmux$51645 $procmux$51643 $procmux$51644_CMP0 $procmux$51632 $procmux$51626 $procmux$51624 $procmux$51625_CMP0 $procmux$51613 $procmux$51607 $procmux$51605 $procmux$51606_CMP0 $procmux$51667 $procmux$51657 $procmux$51655 $procmux$51656_CMP0 $procmux$51648 $procmux$51638 $procmux$51636 $procmux$51637_CMP0 $procmux$51629 $procmux$51619 $procmux$51617 $procmux$51618_CMP0 $procmux$51610 $procmux$51600 $procmux$51598 $procmux$51599_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_cycle__count.next = (p_tl__periph_2e_rst ? value<64>{0u,0u} : (p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<63,56>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<63,56>().val()).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<55,48>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<55,48>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<47,40>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<47,40>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<39,32>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<39,32>().val())).concat((p_tl__periph_2e__24_98 ? (p_tl__periph_2e__24_98 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<31,24>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<31,24>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<31,24>().val())).concat((p_tl__periph_2e__24_86 ? (p_tl__periph_2e__24_86 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<23,16>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<23,16>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<23,16>().val())).concat((p_tl__periph_2e__24_74 ? (p_tl__periph_2e__24_74 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<15,8>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<15,8>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<15,8>().val())).concat((p_tl__periph_2e__24_62 ? (p_tl__periph_2e__24_62 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____data.slice<7,0>().val() : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<7,0>().val()) : value<8>{0u}) : i_flatten_5c_tl__periph_2e__24_add_24_tilelink__soc_2e_v_3a_7247_24_1506__Y.slice<7,0>().val())).val());
	}
	// cells $procdff$53829 $procmux$51555 $procmux$51564 $procmux$51561 $procmux$51559 $procmux$51560_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_output__valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_47 ? (p_tl__periph_2e__24_47 ? (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0x1u} : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1551) : value<1>{0u}) : i_flatten_5c_tl__periph_2e__24_5_5c_output__valid_24_next_5b_0_3a_0_5d__24_1551));
	}
	// cells $procdff$53830 $procmux$51673 $procmux$51686 $procmux$51687_ANY $procmux$51688_CMP0 $procmux$51683 $procmux$51684_CMP0 $procmux$51678 $procmux$51679_CMP0 $procmux$51680_CMP0 $procmux$51681_CMP0 $procmux$51682_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____denied.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_51687__CMP) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<1>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<1>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<1>{0u} : p_tl__periph_2e_bus____d____denied.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____denied.curr)));
	}
	// cells $procdff$53831 $procmux$51707 $procmux$51719 $procmux$51720_CMP0 $procmux$51716 $procmux$51717_CMP0 $procmux$51711 $procmux$51712_CMP0 $procmux$51713_CMP0 $procmux$51714_CMP0 $procmux$51715_CMP0 $flatten\tl_periph.$pos$tilelink_soc.v:7231$1490 $flatten\tl_periph.$extend$tilelink_soc.v:7231$1489 $flatten\tl_periph.$pos$tilelink_soc.v:7230$1488 $flatten\tl_periph.$extend$tilelink_soc.v:7230$1487
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____data.next = (p_tl__periph_2e_rst ? value<32>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__periph_2e_cycle__count.curr.slice<63,32>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__periph_2e_cycle__count.curr.slice<31,0>().val() : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_halt__simulator.curr)) : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? pos_u<32>(pos_u<32>(p_tl__periph_2e_output.curr)) : p_tl__periph_2e_bus____d____data.curr)))) : value<32>{0u}) : p_tl__periph_2e_bus____d____data.curr));
	}
	// cells $procdff$53832 $procmux$51803 $procmux$51816 $procmux$51817_ANY $procmux$51818_CMP0 $procmux$51813 $procmux$51814_CMP0 $procmux$51808 $procmux$51809_CMP0 $procmux$51810_CMP0 $procmux$51811_CMP0 $procmux$51812_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____source.next = (p_tl__periph_2e_rst ? value<1>{0u} : (reduce_or<1>(i_procmux_24_51817__CMP) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____source : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____source : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____source : p_tl__periph_2e_bus____d____source.curr)))) : value<1>{0u}) : p_tl__periph_2e_bus____d____source.curr)));
	}
	// cells $procdff$53833 $procmux$51786 $procmux$51799 $procmux$51800_ANY $procmux$51801_CMP0 $procmux$51796 $procmux$51797_CMP0 $procmux$51791 $procmux$51792_CMP0 $procmux$51793_CMP0 $procmux$51794_CMP0 $procmux$51795_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____size.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_51800__CMP) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? p_tl__data__decoder_2e_bus____a____size : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____size : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? p_tl__data__decoder_2e_bus____a____size : p_tl__periph_2e_bus____d____size.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____size.curr)));
	}
	// cells $procdff$53834 $procmux$51769 $procmux$51782 $procmux$51783_ANY $procmux$51784_CMP0 $procmux$51779 $procmux$51780_CMP0 $procmux$51774 $procmux$51775_CMP0 $procmux$51776_CMP0 $procmux$51777_CMP0 $procmux$51778_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____param.next = (p_tl__periph_2e_rst ? value<2>{0u} : (reduce_or<1>(i_procmux_24_51783__CMP) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<2>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<2>{0u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<2>{0u} : p_tl__periph_2e_bus____d____param.curr)))) : value<2>{0u}) : p_tl__periph_2e_bus____d____param.curr)));
	}
	// cells $procdff$53835 $procmux$51752 $procmux$51765 $procmux$51766_ANY $procmux$51767_CMP0 $procmux$51762 $procmux$51763_CMP0 $procmux$51757 $procmux$51758_CMP0 $procmux$51759_CMP0 $procmux$51760_CMP0 $procmux$51761_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____opcode.next = (p_tl__periph_2e_rst ? value<3>{0u} : (reduce_or<1>(i_procmux_24_51766__CMP) ? value<3>{0u} : (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____opcode, value<3>{0x4u}) ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0xcu}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x8u}) ? value<3>{0x1u} : (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? value<3>{0x1u} : (logic_not<1>(p_tl__periph_2e_bus____a____address) ? value<3>{0x1u} : p_tl__periph_2e_bus____d____opcode.curr)))) : value<3>{0u}) : p_tl__periph_2e_bus____d____opcode.curr)));
	}
	// cells $procdff$53836 $procmux$51746 $procmux$51749
	if (posedge_p_clk) {
		p_tl__periph_2e_bus____d____valid.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e_bus____a____ready ? p_tl__data__decoder_2e_bus____a____valid : p_tl__periph_2e_bus____d____valid.curr));
	}
	// cells $procdff$53837 $procmux$51734 $procmux$51743 $procmux$51740 $procmux$51738 $procmux$51739_CMP0
	if (posedge_p_clk) {
		p_tl__periph_2e_halt__simulator.next = (p_tl__periph_2e_rst ? value<1>{0u} : (p_tl__periph_2e__24_158 ? (p_tl__periph_2e__24_158 ? (eq_uu<1>(p_tl__periph_2e_bus____a____address, value<4>{0x4u}) ? p_tl__data__decoder_2e_bus____a____data.slice<0>().val() : p_tl__periph_2e_halt__simulator.curr) : value<1>{0u}) : p_tl__periph_2e_halt__simulator.curr));
	}
	// cells $procdff$53838 $procmux$51929 $procmux$51932 $flatten\tl_instr_decoder.\rr.$reduce_or$tilelink_soc.v:5207$1304
	if (posedge_p_clk) {
		p_tl__instr__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<2>{0x1u} : (reduce_or<1>(p_tl__instr__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__instr__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5206_24_1303__Y.slice<1,0>().val() : p_tl__instr__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$53839 $procmux$52102 $procmux$52105 $flatten\tl_data_decoder.\rr.$reduce_or$tilelink_soc.v:5276$1319
	if (posedge_p_clk) {
		p_tl__data__decoder_2e_rr_2e_last__grant.next = (p_rst ? value<3>{0x1u} : (reduce_or<1>(p_tl__data__decoder_2e_rr_2e_requests) ? i_flatten_5c_tl__data__decoder_2e__5c_rr_2e__24_or_24_tilelink__soc_2e_v_3a_5275_24_1318__Y.slice<2,0>().val() : p_tl__data__decoder_2e_rr_2e_last__grant.curr));
	}
	// cells $procdff$53840 $procmux$52400 $procmux$52403 $flatten\instruction_master.$and$tilelink_soc.v:4941$1222 $flatten\instruction_master.$add$tilelink_soc.v:4942$1223
	if (posedge_p_clk) {
		p_instruction__master_2e_read__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_rsp__valid, p_instruction__master_2e_rsp__ready) ? add_uu<2>(p_instruction__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_read__ptr.curr));
	}
	// cells $procdff$53841 $procmux$52368 $procmux$52371 $flatten\instruction_master.$and$tilelink_soc.v:4934$1215 $flatten\instruction_master.$add$tilelink_soc.v:4935$1216
	if (posedge_p_clk) {
		p_instruction__master_2e_send__ptr.next = (p_instruction__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_instruction__master_2e_bus____a____valid, p_instruction__master_2e_bus____a____ready) ? add_uu<2>(p_instruction__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_instruction__master_2e_send__ptr.curr));
	}
	// cells $procdff$53842 $procmux$52121 $procmux$52282 $procmux$52267 $procmux$52265 $procmux$52240 $procmux$52238 $procmux$52236 $procmux$52200 $procmux$52198 $procmux$52196 $procmux$52194 $procmux$52151 $procmux$52149 $procmux$52146
	if (posedge_p_clk) {
		p_instruction__master_2e_state.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_51883__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249 : value<2>{0x2u}) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_51883__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1249));
	}
	// cells $procdff$53843 $procmux$52118 $procmux$52276 $procmux$52255 $procmux$52253 $procmux$52222 $procmux$52220 $procmux$52218 $procmux$52174 $procmux$52172 $procmux$52170 $procmux$52168 $procmux$52131 $procmux$52129 $procmux$52126
	if (posedge_p_clk) {
		p_instruction__master_2e_data.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_51883__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251 : p_tl__instr__decoder_2e___bus____d____data) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_51883__Y ? i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251 : p_tl__instr__decoder_2e___bus____d____data)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_next_5b_31_3a_0_5d__24_1251));
	}
	// cells $procdff$53844 $procmux$52115 $procmux$52285 $procmux$52273 $procmux$52271 $procmux$52249 $procmux$52247 $procmux$52245 $procmux$52213 $procmux$52211 $procmux$52209 $procmux$52207 $procmux$52161 $procmux$52159 $procmux$52156
	if (posedge_p_clk) {
		p_instruction__master_2e_state_24_5.next = (p_instruction__master_2e_rst ? value<2>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_51883__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248) : value<2>{0u}) : value<2>{0u}) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248) : value<2>{0u}) : value<2>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<2>{0u} : (i_procmux_24_51883__Y ? value<2>{0x2u} : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1248));
	}
	// cells $procdff$53845 $procmux$52112 $procmux$52279 $procmux$52261 $procmux$52259 $procmux$52231 $procmux$52229 $procmux$52227 $procmux$52187 $procmux$52185 $procmux$52183 $procmux$52181 $procmux$52141 $procmux$52139 $procmux$52136
	if (posedge_p_clk) {
		p_instruction__master_2e_data_24_18.next = (p_instruction__master_2e_rst ? value<32>{0u} : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? (p_instruction__master_2e__24_27 ? (i_procmux_24_51883__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250) : value<32>{0u}) : value<32>{0u}) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250) : value<32>{0u}) : value<32>{0u}) : (p_instruction__master_2e__24_23 ? (p_instruction__master_2e__24_25 ? value<32>{0u} : (i_procmux_24_51883__Y ? p_tl__instr__decoder_2e___bus____d____data : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250)) : value<32>{0u})) : value<32>{0u}) : i_flatten_5c_instruction__master_2e__24_3_5c_data_24_18_24_next_5b_31_3a_0_5d__24_1250));
	}
	// cells $procdff$53846 $procmux$52751 $procmux$52833 $procmux$52827 $procmux$52825 $procmux$52815 $procmux$52813 $procmux$52811 $procmux$52784 $procmux$52782 $procmux$52780 $procmux$52778 $procmux$52761 $procmux$52759 $procmux$52756
	if (posedge_p_clk) {
		p_data__master_2e_data_24_62.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_344 ? (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? p_data__master_2e_data_24_62.curr : (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? value<32>{0u} : (i_procmux_24_52042__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? value<32>{0u} : (i_procmux_24_52042__Y ? p_data__master_2e_data_24_62.curr : p_data__master_2e_read__data)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_62.curr));
	}
	// cells $procdff$53847 $procmux$52748 $procmux$52830 $procmux$52821 $procmux$52819 $procmux$52806 $procmux$52804 $procmux$52802 $procmux$52797 $procmux$52795 $procmux$52793 $procmux$52791 $procmux$52771 $procmux$52769 $procmux$52766
	if (posedge_p_clk) {
		p_data__master_2e_data_24_63.next = (p_data__master_2e_rst ? value<32>{0u} : (p_data__master_2e__24_344 ? (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? p_data__master_2e_data_24_63.curr : (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? value<32>{0u} : (i_procmux_24_52042__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u}) : value<32>{0u})) : value<32>{0u}) : value<32>{0u}) : (p_data__master_2e__24_344 ? (p_data__master_2e__24_346 ? value<32>{0u} : (i_procmux_24_52042__Y ? p_data__master_2e_read__data : p_data__master_2e_data_24_63.curr)) : value<32>{0u})) : value<32>{0u}) : p_data__master_2e_data_24_63.curr));
	}
	// cells $procdff$53848 $procmux$52663 $procmux$52666 $flatten\data_master.$and$tilelink_soc.v:3616$1045 $flatten\data_master.$add$tilelink_soc.v:3618$1047
	if (posedge_p_clk) {
		p_data__master_2e_read__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_rsp__valid, p_data__master_2e_rsp__ready) ? add_uu<2>(p_data__master_2e_read__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_read__ptr.curr));
	}
	// cells $procdff$53849 $procmux$52631 $procmux$52634 $flatten\data_master.$and$tilelink_soc.v:3610$1039 $flatten\data_master.$add$tilelink_soc.v:3611$1040
	if (posedge_p_clk) {
		p_data__master_2e_send__ptr.next = (p_data__master_2e_rst ? value<1>{0u} : (and_uu<1>(p_data__master_2e_bus____a____valid, p_data__master_2e_bus____a____ready) ? add_uu<2>(p_data__master_2e_send__ptr.curr, value<1>{0x1u}).slice<0>().val() : p_data__master_2e_send__ptr.curr));
	}
	// cells $procdff$53850 $procmux$52604 $procmux$52621 $procmux$52611 $procmux$52609
	if (posedge_p_clk) {
		p_data__master_2e_addr__low.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_addr__low.curr : p_core_2e_m__alu__result.curr.slice<1,0>().val()) : value<2>{0u}) : p_data__master_2e_addr__low.curr));
	}
	// cells $procdff$53851 $procmux$52601 $procmux$52624 $procmux$52618 $procmux$52616
	if (posedge_p_clk) {
		p_data__master_2e_addr__low_24_46.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_47 ? (p_data__master_2e__24_47 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_m__alu__result.curr.slice<1,0>().val() : p_data__master_2e_addr__low_24_46.curr) : value<2>{0u}) : p_data__master_2e_addr__low_24_46.curr));
	}
	// cells $procdff$53852 $procmux$52578 $procmux$52595 $procmux$52585 $procmux$52583
	if (posedge_p_clk) {
		p_data__master_2e_unsigned.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_unsigned.curr : p_core_2e_mem__unsigned_24_310.curr) : value<1>{0u}) : p_data__master_2e_unsigned.curr));
	}
	// cells $procdff$53853 $procmux$52575 $procmux$52598 $procmux$52592 $procmux$52590
	if (posedge_p_clk) {
		p_data__master_2e_unsigned_24_43.next = (p_data__master_2e_rst ? value<1>{0u} : (p_data__master_2e__24_44 ? (p_data__master_2e__24_44 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_mem__unsigned_24_310.curr : p_data__master_2e_unsigned_24_43.curr) : value<1>{0u}) : p_data__master_2e_unsigned_24_43.curr));
	}
	// cells $procdff$53854 $procmux$52552 $procmux$52569 $procmux$52559 $procmux$52557
	if (posedge_p_clk) {
		p_data__master_2e_size.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_data__master_2e_size.curr : p_core_2e_mem__size_24_309.curr) : value<2>{0u}) : p_data__master_2e_size.curr));
	}
	// cells $procdff$53855 $procmux$52549 $procmux$52572 $procmux$52566 $procmux$52564
	if (posedge_p_clk) {
		p_data__master_2e_size_24_40.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_41 ? (p_data__master_2e__24_41 ? (p_data__master_2e_send__ptr.curr ? p_core_2e_mem__size_24_309.curr : p_data__master_2e_size_24_40.curr) : value<2>{0u}) : p_data__master_2e_size_24_40.curr));
	}
	// cells $procdff$53856 $procmux$52424 $procmux$52503 $procmux$52494 $procmux$52492 $procmux$52479 $procmux$52477 $procmux$52475 $procmux$52457 $procmux$52455 $procmux$52453 $procmux$52451 $procmux$52434 $procmux$52432 $procmux$52429
	if (posedge_p_clk) {
		p_data__master_2e_state.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? value<2>{0u} : (i_procmux_24_52042__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088 : value<2>{0x2u})) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_52042__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088 : value<2>{0x2u})) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_next_5b_1_3a_0_5d__24_1088));
	}
	// cells $procdff$53857 $procmux$52421 $procmux$52506 $procmux$52500 $procmux$52498 $procmux$52488 $procmux$52486 $procmux$52484 $procmux$52470 $procmux$52468 $procmux$52466 $procmux$52464 $procmux$52444 $procmux$52442 $procmux$52439
	if (posedge_p_clk) {
		p_data__master_2e_state_24_5.next = (p_data__master_2e_rst ? value<2>{0u} : (p_data__master_2e__24_34 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087 : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1492_24_173__Y ? value<2>{0u} : (i_procmux_24_52042__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087)) : value<2>{0u}) : value<2>{0u})) : value<2>{0u}) : value<2>{0u}) : (p_data__master_2e__24_34 ? (p_data__master_2e__24_36 ? value<2>{0u} : (i_procmux_24_52042__Y ? value<2>{0x2u} : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087)) : value<2>{0u})) : value<2>{0u}) : i_flatten_5c_data__master_2e__24_3_5c_state_24_5_24_next_5b_1_3a_0_5d__24_1087));
	}
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1349.3-1352.6
	// cell $procdff$53858
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__ADDR.next = i_procmux_24_52939__Y;
	}
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1349.3-1352.6
	// cell $procdff$53859
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__DATA.next = i_procmux_24_52936__Y;
	}
	// \src: tilelink_soc.v:26968.8-26987.4|tilelink_soc.v:1349.3-1352.6
	// cell $procdff$53860
	if (posedge_p_clk) {
		i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__EN.next = i_procmux_24_52933__Y;
	}
	// cells $procdff$53861 $procmux$52943 $flatten\core.$and$tilelink_soc.v:1367$46 $flatten\core.$not$tilelink_soc.v:1366$45 $flatten\core.$not$tilelink_soc.v:1365$44
	if (posedge_p_clk) {
		p_core_2e___0__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1357_24_42__DATA : p_core_2e___0__.curr);
	}
	// cells $procdff$53862 $procmux$52941 $flatten\core.$and$tilelink_soc.v:1370$49 $flatten\core.$not$tilelink_soc.v:1369$48 $flatten\core.$not$tilelink_soc.v:1368$47
	if (posedge_p_clk) {
		p_core_2e___1__.next = (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? i_flatten_5c_core_2e__24_memrd_24__5c_register__file_24_tilelink__soc_2e_v_3a_1360_24_43__DATA : p_core_2e___1__.curr);
	}
	// cells $procdff$53863 $procmux$53575 $procmux$53578
	if (posedge_p_clk) {
		p_core_2e_m__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$53864 $procmux$53551 $procmux$53554 $flatten\core.$and$tilelink_soc.v:1449$130 $flatten\core.$not$tilelink_soc.v:1448$129 $flatten\core.$not$tilelink_soc.v:1447$128 $procmux$53557
	if (posedge_p_clk) {
		p_core_2e_m__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_x__arbitration____valid.curr : (i_flatten_5c_core_2e__24_or_24_tilelink__soc_2e_v_3a_1445_24_126__Y ? p_core_2e_m__arbitration____valid.curr : value<1>{0u})));
	}
	// cells $procdff$53865 $procmux$53476 $procmux$53479 $flatten\core.$and$tilelink_soc.v:1416$95 $flatten\core.$not$tilelink_soc.v:1415$94 $flatten\core.$not$tilelink_soc.v:1414$93 $procmux$53284 $procmux$53281 $procmux$53278 $procmux$53257 $procmux$53254 $procmux$53252 $flatten\core.$and$tilelink_soc.v:1609$290 $flatten\core.$eq$tilelink_soc.v:1608$289 $flatten\core.$and$tilelink_soc.v:1607$288 $procmux$53266 $procmux$53263 $procmux$53261 $flatten\core.$and$tilelink_soc.v:1606$287 $flatten\core.$eq$tilelink_soc.v:1605$286 $flatten\core.$and$tilelink_soc.v:1604$285 $procmux$53275 $procmux$53272 $procmux$53270 $flatten\core.$and$tilelink_soc.v:1602$283 $flatten\core.$eq$tilelink_soc.v:1601$282 $flatten\core.$and$tilelink_soc.v:1600$281
	if (posedge_p_clk) {
		p_core_2e_x__rs2__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_659 ? value<1>{0u} : (p_core_2e__24_659 ? value<1>{0u} : (p_core_2e__24_661 ? (p_core_2e__24_659 ? value<1>{0u} : (p_core_2e__24_661 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_register__write_24_129.curr), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2)) ? value<1>{0x1u} : (p_core_2e__24_659 ? value<1>{0u} : (p_core_2e__24_661 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_register__write_24_146.curr), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2)) ? value<1>{0x1u} : (p_core_2e__24_659 ? value<1>{0u} : (p_core_2e__24_661 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_register__write_24_443.curr), eq_uu<1>(p_core_2e_rd_24_431.curr, p_core_2e_rs2)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs2__is__forwarded.curr));
	}
	// cells $procdff$53866 $procmux$53470 $procmux$53473 $flatten\core.$and$tilelink_soc.v:1413$92 $flatten\core.$not$tilelink_soc.v:1412$91 $flatten\core.$not$tilelink_soc.v:1411$90 $procmux$53212 $procmux$53209 $procmux$53206 $procmux$53185 $procmux$53182 $procmux$53180 $flatten\core.$and$tilelink_soc.v:1554$235 $flatten\core.$eq$tilelink_soc.v:1553$234 $flatten\core.$and$tilelink_soc.v:1552$233 $procmux$53194 $procmux$53191 $procmux$53189 $flatten\core.$and$tilelink_soc.v:1551$232 $flatten\core.$eq$tilelink_soc.v:1550$231 $flatten\core.$and$tilelink_soc.v:1549$230 $procmux$53203 $procmux$53200 $procmux$53198 $flatten\core.$and$tilelink_soc.v:1547$228 $flatten\core.$eq$tilelink_soc.v:1546$227 $flatten\core.$and$tilelink_soc.v:1545$226
	if (posedge_p_clk) {
		p_core_2e_x__rs1__is__forwarded.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_559 ? value<1>{0u} : (p_core_2e__24_559 ? value<1>{0u} : (p_core_2e__24_561 ? (p_core_2e__24_559 ? value<1>{0u} : (p_core_2e__24_561 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_register__write_24_129.curr), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1)) ? value<1>{0x1u} : (p_core_2e__24_559 ? value<1>{0u} : (p_core_2e__24_561 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_register__write_24_146.curr), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1)) ? value<1>{0x1u} : (p_core_2e__24_559 ? value<1>{0u} : (p_core_2e__24_561 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_register__write_24_443.curr), eq_uu<1>(p_core_2e_rd_24_431.curr, p_core_2e_rs1)) ? value<1>{0x1u} : value<1>{0u}) : value<1>{0u}))) : value<1>{0u}))) : value<1>{0u})) : value<1>{0u}))) : p_core_2e_x__rs1__is__forwarded.curr));
	}
	// cells $procdff$53867 $procmux$53464 $procmux$53467 $flatten\core.$and$tilelink_soc.v:1410$89 $flatten\core.$not$tilelink_soc.v:1409$88 $flatten\core.$not$tilelink_soc.v:1408$87 $procmux$53248 $procmux$53245 $procmux$53242 $procmux$53221 $procmux$53218 $procmux$53216 $flatten\core.$and$tilelink_soc.v:1582$263 $flatten\core.$eq$tilelink_soc.v:1580$261 $flatten\core.$and$tilelink_soc.v:1579$260 $procmux$53230 $procmux$53227 $procmux$53225 $flatten\core.$and$tilelink_soc.v:1578$259 $flatten\core.$eq$tilelink_soc.v:1577$258 $flatten\core.$and$tilelink_soc.v:1576$257 $procmux$53239 $procmux$53236 $procmux$53234 $flatten\core.$and$tilelink_soc.v:1575$256 $flatten\core.$eq$tilelink_soc.v:1574$255 $flatten\core.$and$tilelink_soc.v:1573$254
	if (posedge_p_clk) {
		p_core_2e_x__rs2__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_609 ? value<32>{0u} : (p_core_2e__24_609 ? value<32>{0u} : (p_core_2e__24_611 ? (p_core_2e__24_609 ? value<32>{0u} : (p_core_2e__24_611 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_register__write_24_129.curr), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs2)) ? p_core_2e_x__alu__result : (p_core_2e__24_609 ? value<32>{0u} : (p_core_2e__24_611 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_register__write_24_146.curr), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs2)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_609 ? value<32>{0u} : (p_core_2e__24_611 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_register__write_24_443.curr), eq_uu<1>(p_core_2e_rd_24_431.curr, p_core_2e_rs2)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs2__value__forwarded.curr));
	}
	// cells $procdff$53868 $procmux$53458 $procmux$53461 $flatten\core.$and$tilelink_soc.v:1406$85 $flatten\core.$not$tilelink_soc.v:1405$84 $flatten\core.$not$tilelink_soc.v:1404$83 $procmux$53176 $procmux$53173 $procmux$53170 $procmux$53149 $procmux$53146 $procmux$53144 $flatten\core.$and$tilelink_soc.v:1527$208 $flatten\core.$eq$tilelink_soc.v:1525$206 $flatten\core.$and$tilelink_soc.v:1524$205 $procmux$53158 $procmux$53155 $procmux$53153 $flatten\core.$and$tilelink_soc.v:1523$204 $flatten\core.$eq$tilelink_soc.v:1522$203 $flatten\core.$and$tilelink_soc.v:1521$202 $procmux$53167 $procmux$53164 $procmux$53162 $flatten\core.$and$tilelink_soc.v:1520$201 $flatten\core.$eq$tilelink_soc.v:1519$200 $flatten\core.$and$tilelink_soc.v:1518$199
	if (posedge_p_clk) {
		p_core_2e_x__rs1__value__forwarded.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? (p_core_2e__24_509 ? value<32>{0u} : (p_core_2e__24_509 ? value<32>{0u} : (p_core_2e__24_511 ? (p_core_2e__24_509 ? value<32>{0u} : (p_core_2e__24_511 ? (and_uu<1>(and_uu<1>(p_core_2e_x__arbitration____valid.curr, p_core_2e_register__write_24_129.curr), eq_uu<1>(p_core_2e_rd_24_132.curr, p_core_2e_rs1)) ? p_core_2e_x__alu__result : (p_core_2e__24_509 ? value<32>{0u} : (p_core_2e__24_511 ? (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, p_core_2e_register__write_24_146.curr), eq_uu<1>(p_core_2e_rd_24_149.curr, p_core_2e_rs1)) ? p_core_2e_m__alu__result.curr : (p_core_2e__24_509 ? value<32>{0u} : (p_core_2e__24_511 ? (and_uu<1>(and_uu<1>(p_core_2e_w__arbitration____valid.curr, p_core_2e_register__write_24_443.curr), eq_uu<1>(p_core_2e_rd_24_431.curr, p_core_2e_rs1)) ? p_core_2e_w__write__data : value<32>{0u}) : value<32>{0u}))) : value<32>{0u}))) : value<32>{0u})) : value<32>{0u}))) : p_core_2e_x__rs1__value__forwarded.curr));
	}
	// cells $procdff$53869 $procmux$53398 $procmux$53404
	if (posedge_p_clk) {
		p_core_2e_rs1_24_174.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_191 ? p_instruction__master_2e_rsp__data.slice<19,15>().val() : p_core_2e_rs1_24_174.curr));
	}
	// cells $procdff$53870 $procmux$53395 $procmux$53401
	if (posedge_p_clk) {
		p_core_2e_rs2_24_175.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_191 ? p_instruction__master_2e_rsp__data.slice<24,20>().val() : p_core_2e_rs2_24_175.curr));
	}
	// cells $procdff$53871 $procmux$53392 $procmux$53425
	if (posedge_p_clk) {
		p_core_2e_rd_24_132.next = (p_core_2e_rst ? value<5>{0u} : (p_core_2e__24_191 ? p_instruction__master_2e_rsp__data.slice<11,7>().val() : p_core_2e_rd_24_132.curr));
	}
	// cells $procdff$53872 $procmux$53389 $procmux$53437
	if (posedge_p_clk) {
		p_core_2e_immediate_24_176.next = (p_core_2e_rst ? value<32>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_immediate : p_core_2e_immediate_24_176.curr));
	}
	// cells $procdff$53873 $procmux$53386 $procmux$53446
	if (posedge_p_clk) {
		p_core_2e_alu__operation_24_177.next = (p_core_2e_rst ? value<3>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_alu__operation : p_core_2e_alu__operation_24_177.curr));
	}
	// cells $procdff$53874 $procmux$53383 $procmux$53440
	if (posedge_p_clk) {
		p_core_2e_alu__mode__switch_24_178.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_alu__mode__switch : p_core_2e_alu__mode__switch_24_178.curr));
	}
	// cells $procdff$53875 $procmux$53380 $procmux$53443
	if (posedge_p_clk) {
		p_core_2e_alu__left__select_24_179.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_alu__left__select : p_core_2e_alu__left__select_24_179.curr));
	}
	// cells $procdff$53876 $procmux$53377 $procmux$53434
	if (posedge_p_clk) {
		p_core_2e_alu__right__select_24_180.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_alu__right__select : p_core_2e_alu__right__select_24_180.curr));
	}
	// cells $procdff$53877 $procmux$53374 $procmux$53431
	if (posedge_p_clk) {
		p_core_2e_branch__mode_24_181.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_branch__mode : p_core_2e_branch__mode_24_181.curr));
	}
	// cells $procdff$53878 $procmux$53371 $procmux$53428
	if (posedge_p_clk) {
		p_core_2e_branch__type_24_182.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_branch__type : p_core_2e_branch__type_24_182.curr));
	}
	// cells $procdff$53879 $procmux$53368 $procmux$53422
	if (posedge_p_clk) {
		p_core_2e_mem__enable_24_183.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_mem__enable : p_core_2e_mem__enable_24_183.curr));
	}
	// cells $procdff$53880 $procmux$53365 $procmux$53419
	if (posedge_p_clk) {
		p_core_2e_mem__we_24_184.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_mem__we : p_core_2e_mem__we_24_184.curr));
	}
	// cells $procdff$53881 $procmux$53362 $procmux$53416
	if (posedge_p_clk) {
		p_core_2e_mem__size_24_185.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_mem__size : p_core_2e_mem__size_24_185.curr));
	}
	// cells $procdff$53882 $procmux$53359 $procmux$53413
	if (posedge_p_clk) {
		p_core_2e_mem__unsigned_24_186.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_mem__unsigned : p_core_2e_mem__unsigned_24_186.curr));
	}
	// cells $procdff$53883 $procmux$53356 $procmux$53407
	if (posedge_p_clk) {
		p_core_2e_register__write_24_129.next = (p_core_2e_rst ? value<1>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_register__write : p_core_2e_register__write_24_129.curr));
	}
	// cells $procdff$53884 $procmux$53353 $procmux$53410
	if (posedge_p_clk) {
		p_core_2e_writeback__select_24_124.next = (p_core_2e_rst ? value<2>{0u} : (p_core_2e__24_191 ? p_core_2e_decoder_2e_writeback__select : p_core_2e_writeback__select_24_124.curr));
	}
	// cells $procdff$53885 $procmux$53347 $procmux$53350 $flatten\core.$and$tilelink_soc.v:1399$78 $flatten\core.$not$tilelink_soc.v:1398$77 $flatten\core.$not$tilelink_soc.v:1397$76
	if (posedge_p_clk) {
		p_core_2e_x__instruction.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_instruction__master_2e_rsp__data : p_core_2e_x__instruction.curr));
	}
	// cells $procdff$53886 $procmux$53341 $procmux$53344 $flatten\core.$and$tilelink_soc.v:1396$75 $flatten\core.$not$tilelink_soc.v:1395$74 $flatten\core.$not$tilelink_soc.v:1394$73
	if (posedge_p_clk) {
		p_core_2e_x__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), not_u<1>(p_core_2e_x__arbitration____remove)) ? p_core_2e_d__program__counter.curr : p_core_2e_x__program__counter.curr));
	}
	// cells $procdff$53887 $procmux$53320 $procmux$53323 $flatten\core.$and$tilelink_soc.v:1375$54 $flatten\core.$not$tilelink_soc.v:1374$53 $flatten\core.$not$tilelink_soc.v:1373$52 $procmux$53326 $flatten\core.$or$tilelink_soc.v:1372$51 $flatten\core.$not$tilelink_soc.v:1371$50
	if (posedge_p_clk) {
		p_core_2e_x__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_d__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_x__arbitration____halted), p_core_2e_x__arbitration____remove) ? value<1>{0u} : p_core_2e_x__arbitration____valid.curr)));
	}
	// cells $procdff$53888 $procmux$53296 $procmux$53299 $flatten\core.$and$tilelink_soc.v:1621$302 $flatten\core.$not$tilelink_soc.v:1620$301 $flatten\core.$not$tilelink_soc.v:1619$300
	if (posedge_p_clk) {
		p_core_2e_d__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), not_u<1>(p_core_2e_d__arbitration____remove)) ? p_core_2e_f__program__counter.curr : p_core_2e_d__program__counter.curr));
	}
	// cells $procdff$53889 $procmux$53117 $procmux$53120 $flatten\core.$and$tilelink_soc.v:1617$298 $flatten\core.$not$tilelink_soc.v:1616$297 $flatten\core.$not$tilelink_soc.v:1615$296 $procmux$53123 $flatten\core.$or$tilelink_soc.v:1614$295 $flatten\core.$not$tilelink_soc.v:1613$294
	if (posedge_p_clk) {
		p_core_2e_d__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_f__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_d__arbitration____halted), p_core_2e_d__arbitration____remove) ? value<1>{0u} : p_core_2e_d__arbitration____valid.curr)));
	}
	// cells $procdff$53890 $procmux$53560 $procmux$53563 $flatten\core.$and$tilelink_soc.v:1559$240 $flatten\core.$not$tilelink_soc.v:1548$229 $flatten\core.$not$tilelink_soc.v:1537$218
	if (posedge_p_clk) {
		p_core_2e_f__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), not_u<1>(p_core_2e_f__arbitration____remove)) ? p_core_2e_a__program__counter.curr : p_core_2e_f__program__counter.curr));
	}
	// cells $procdff$53891 $procmux$53449 $procmux$53452 $flatten\core.$and$tilelink_soc.v:1515$196 $flatten\core.$not$tilelink_soc.v:1504$185 $flatten\core.$not$tilelink_soc.v:1495$176 $procmux$53455 $flatten\core.$or$tilelink_soc.v:1489$170 $flatten\core.$not$tilelink_soc.v:1487$168
	if (posedge_p_clk) {
		p_core_2e_f__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : (and_uu<1>(not_u<1>(p_core_2e_a__arbitration____halted), not_u<1>(p_core_2e_a__arbitration____remove)) ? p_core_2e_a__arbitration____valid.curr : (or_uu<1>(not_u<1>(p_core_2e_f__arbitration____halted), p_core_2e_f__arbitration____remove) ? value<1>{0u} : p_core_2e_f__arbitration____valid.curr)));
	}
	// cells $procdff$53892 $procmux$53311 $procmux$53314 $flatten\core.$and$tilelink_soc.v:1475$156 $flatten\core.$and$tilelink_soc.v:1458$139 $flatten\core.$not$tilelink_soc.v:1454$135 $procmux$53317 $flatten\core.$and$tilelink_soc.v:1439$120 $flatten\core.$not$tilelink_soc.v:1428$109 $flatten\core.$and$tilelink_soc.v:1418$97 $flatten\core.$not$tilelink_soc.v:1407$86 $flatten\core.$add$tilelink_soc.v:1452$133
	if (posedge_p_clk) {
		p_core_2e_a__program__counter.next = (p_core_2e_rst ? value<32>{0u} : (and_uu<1>(and_uu<1>(p_core_2e_m__arbitration____valid.curr, not_u<1>(p_core_2e_m__arbitration____halted)), p_core_2e_m__branch__taken.curr) ? p_core_2e_m__branch__target.curr : (and_uu<1>(and_uu<1>(p_core_2e_a__arbitration____valid.curr, not_u<1>(p_core_2e_a__arbitration____halted)), not_u<1>(p_core_2e_a__arbitration____remove)) ? add_uu<33>(p_core_2e_a__program__counter.curr, value<3>{0x4u}).slice<31,0>().val() : p_core_2e_a__program__counter.curr)));
	}
	// cells $procdff$53893 $procmux$52946
	if (posedge_p_clk) {
		p_core_2e_a__arbitration____valid.next = (p_core_2e_rst ? value<1>{0u} : value<1>{0x1u});
	}
	// cells $procdff$53894 $procmux$53132 $procmux$53135
	if (posedge_p_clk) {
		p_core_2e_w__muldiv__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_w__muldiv__result.curr : p_core_2e_m__muldiv__result.curr));
	}
	// cells $procdff$53895 $procmux$53126 $procmux$53129
	if (posedge_p_clk) {
		p_core_2e_w__alu__result.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_w__alu__result.curr : p_core_2e_m__alu__result.curr));
	}
	// cells $procdff$53896 $procmux$53066 $procmux$53072
	if (posedge_p_clk) {
		p_core_2e_rs1_24_429.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_rs1_24_429.curr : p_core_2e_rs1_24_298.curr));
	}
	// cells $procdff$53897 $procmux$53063 $procmux$53069
	if (posedge_p_clk) {
		p_core_2e_rs2_24_430.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_rs2_24_430.curr : p_core_2e_rs2_24_299.curr));
	}
	// cells $procdff$53898 $procmux$53060 $procmux$53093
	if (posedge_p_clk) {
		p_core_2e_rd_24_431.next = (p_core_2e_rst ? value<5>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_rd_24_431.curr : p_core_2e_rd_24_149.curr));
	}
	// cells $procdff$53899 $procmux$53057 $procmux$53105
	if (posedge_p_clk) {
		p_core_2e_immediate_24_432.next = (p_core_2e_rst ? value<32>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_immediate_24_432.curr : p_core_2e_immediate_24_300.curr));
	}
	// cells $procdff$53900 $procmux$53054 $procmux$53114
	if (posedge_p_clk) {
		p_core_2e_alu__operation_24_433.next = (p_core_2e_rst ? value<3>{0u} : (i_flatten_5c_core_2e__24_and_24_tilelink__soc_2e_v_3a_1496_24_177__Y ? p_core_2e_alu__operation_24_433.curr : p_core_2e_alu__operation_24_301.curr));
	}
	// connection
	p_output = p_tl__periph_2e_output.curr;
	// connection
	p_output__valid = p_tl__periph_2e_output__valid.curr;
	// connection
	p_halt__simulator = p_tl__periph_2e_halt__simulator.curr;
	return converged;
}

bool p_top::commit() {
	bool changed = false;
	if (p_tl__rom__arbiter_2e_rr_2e_valid.commit()) changed = true;
	if (p_tl__rom__arbiter_2e_rr_2e_grant.commit()) changed = true;
	if (p_tl__rom_2e_last__a____address.commit()) changed = true;
	if (p_tl__rom_2e_last__a____corrupt.commit()) changed = true;
	if (p_tl__rom_2e_last__a____data.commit()) changed = true;
	if (p_tl__rom_2e_last__a____mask.commit()) changed = true;
	if (p_tl__rom_2e_last__a____opcode.commit()) changed = true;
	if (p_tl__rom_2e_last__a____param.commit()) changed = true;
	if (p_tl__rom_2e_last__a____ready.commit()) changed = true;
	if (p_tl__rom_2e_last__a____size.commit()) changed = true;
	if (p_tl__rom_2e_last__a____source.commit()) changed = true;
	if (p_tl__rom_2e_last__a____valid.commit()) changed = true;
	if (p_tl__rom_2e___0__.commit()) changed = true;
	if (p_tl__ram__arbiter_2e_rr_2e_valid.commit()) changed = true;
	if (p_tl__ram__arbiter_2e_rr_2e_grant.commit()) changed = true;
	if (p_tl__ram_2e_last__a____address.commit()) changed = true;
	if (p_tl__ram_2e_last__a____corrupt.commit()) changed = true;
	if (p_tl__ram_2e_last__a____data.commit()) changed = true;
	if (p_tl__ram_2e_last__a____mask.commit()) changed = true;
	if (p_tl__ram_2e_last__a____opcode.commit()) changed = true;
	if (p_tl__ram_2e_last__a____param.commit()) changed = true;
	if (p_tl__ram_2e_last__a____ready.commit()) changed = true;
	if (p_tl__ram_2e_last__a____size.commit()) changed = true;
	if (p_tl__ram_2e_last__a____source.commit()) changed = true;
	if (p_tl__ram_2e_last__a____valid.commit()) changed = true;
	if (p_tl__ram_2e___0__.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16110_24_9829__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16112_24_9830__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16114_24_9831__EN.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__ADDR.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__DATA.commit()) changed = true;
	if (i_flatten_5c_tl__ram_2e__24_memwr_24__5c_memory_24_tilelink__soc_2e_v_3a_16116_24_9832__EN.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____corrupt.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____data.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____denied.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____opcode.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____param.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____size.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____source.commit()) changed = true;
	if (p_tl__periph_2e_bus____d____valid.commit()) changed = true;
	if (p_tl__periph_2e_cycle__count.commit()) changed = true;
	if (p_tl__periph_2e_halt__simulator.commit()) changed = true;
	if (p_tl__periph_2e_output.commit()) changed = true;
	if (p_tl__periph_2e_output__valid.commit()) changed = true;
	if (p_tl__instr__decoder_2e_rr_2e_last__grant.commit()) changed = true;
	if (p_tl__data__decoder_2e_rr_2e_last__grant.commit()) changed = true;
	if (p_instruction__master_2e_data.commit()) changed = true;
	if (p_instruction__master_2e_data_24_18.commit()) changed = true;
	if (p_instruction__master_2e_read__ptr.commit()) changed = true;
	if (p_instruction__master_2e_send__ptr.commit()) changed = true;
	if (p_instruction__master_2e_state.commit()) changed = true;
	if (p_instruction__master_2e_state_24_5.commit()) changed = true;
	if (p_data__master_2e_addr__low.commit()) changed = true;
	if (p_data__master_2e_addr__low_24_46.commit()) changed = true;
	if (p_data__master_2e_data_24_62.commit()) changed = true;
	if (p_data__master_2e_data_24_63.commit()) changed = true;
	if (p_data__master_2e_read__ptr.commit()) changed = true;
	if (p_data__master_2e_send__ptr.commit()) changed = true;
	if (p_data__master_2e_size.commit()) changed = true;
	if (p_data__master_2e_size_24_40.commit()) changed = true;
	if (p_data__master_2e_state.commit()) changed = true;
	if (p_data__master_2e_state_24_5.commit()) changed = true;
	if (p_data__master_2e_unsigned.commit()) changed = true;
	if (p_data__master_2e_unsigned_24_43.commit()) changed = true;
	if (p_core_2e_a__arbitration____valid.commit()) changed = true;
	if (p_core_2e_a__program__counter.commit()) changed = true;
	if (p_core_2e_alu__left__select_24_179.commit()) changed = true;
	if (p_core_2e_alu__left__select_24_303.commit()) changed = true;
	if (p_core_2e_alu__left__select_24_435.commit()) changed = true;
	if (p_core_2e_alu__mode__switch_24_178.commit()) changed = true;
	if (p_core_2e_alu__mode__switch_24_302.commit()) changed = true;
	if (p_core_2e_alu__mode__switch_24_434.commit()) changed = true;
	if (p_core_2e_alu__operation_24_177.commit()) changed = true;
	if (p_core_2e_alu__operation_24_301.commit()) changed = true;
	if (p_core_2e_alu__operation_24_433.commit()) changed = true;
	if (p_core_2e_alu__right__select_24_180.commit()) changed = true;
	if (p_core_2e_alu__right__select_24_304.commit()) changed = true;
	if (p_core_2e_alu__right__select_24_436.commit()) changed = true;
	if (p_core_2e_branch__mode_24_181.commit()) changed = true;
	if (p_core_2e_branch__mode_24_305.commit()) changed = true;
	if (p_core_2e_branch__mode_24_437.commit()) changed = true;
	if (p_core_2e_branch__type_24_182.commit()) changed = true;
	if (p_core_2e_branch__type_24_306.commit()) changed = true;
	if (p_core_2e_branch__type_24_438.commit()) changed = true;
	if (p_core_2e_d__arbitration____valid.commit()) changed = true;
	if (p_core_2e_d__program__counter.commit()) changed = true;
	if (p_core_2e_f__arbitration____valid.commit()) changed = true;
	if (p_core_2e_f__program__counter.commit()) changed = true;
	if (p_core_2e_immediate_24_176.commit()) changed = true;
	if (p_core_2e_immediate_24_300.commit()) changed = true;
	if (p_core_2e_immediate_24_432.commit()) changed = true;
	if (p_core_2e_m__alu__result.commit()) changed = true;
	if (p_core_2e_m__arbitration____valid.commit()) changed = true;
	if (p_core_2e_m__branch__taken.commit()) changed = true;
	if (p_core_2e_m__branch__target.commit()) changed = true;
	if (p_core_2e_m__instruction.commit()) changed = true;
	if (p_core_2e_m__muldiv__result.commit()) changed = true;
	if (p_core_2e_m__program__counter.commit()) changed = true;
	if (p_core_2e_m__rs2__value.commit()) changed = true;
	if (p_core_2e_mem__enable_24_183.commit()) changed = true;
	if (p_core_2e_mem__enable_24_307.commit()) changed = true;
	if (p_core_2e_mem__enable_24_439.commit()) changed = true;
	if (p_core_2e_mem__size_24_185.commit()) changed = true;
	if (p_core_2e_mem__size_24_309.commit()) changed = true;
	if (p_core_2e_mem__size_24_441.commit()) changed = true;
	if (p_core_2e_mem__unsigned_24_186.commit()) changed = true;
	if (p_core_2e_mem__unsigned_24_310.commit()) changed = true;
	if (p_core_2e_mem__unsigned_24_442.commit()) changed = true;
	if (p_core_2e_mem__we_24_184.commit()) changed = true;
	if (p_core_2e_mem__we_24_308.commit()) changed = true;
	if (p_core_2e_mem__we_24_440.commit()) changed = true;
	if (p_core_2e_rd_24_132.commit()) changed = true;
	if (p_core_2e_rd_24_149.commit()) changed = true;
	if (p_core_2e_rd_24_431.commit()) changed = true;
	if (p_core_2e_register__write_24_129.commit()) changed = true;
	if (p_core_2e_register__write_24_146.commit()) changed = true;
	if (p_core_2e_register__write_24_443.commit()) changed = true;
	if (p_core_2e_rs1_24_174.commit()) changed = true;
	if (p_core_2e_rs1_24_298.commit()) changed = true;
	if (p_core_2e_rs1_24_429.commit()) changed = true;
	if (p_core_2e_rs2_24_175.commit()) changed = true;
	if (p_core_2e_rs2_24_299.commit()) changed = true;
	if (p_core_2e_rs2_24_430.commit()) changed = true;
	if (p_core_2e_w__alu__result.commit()) changed = true;
	if (p_core_2e_w__arbitration____valid.commit()) changed = true;
	if (p_core_2e_w__instruction.commit()) changed = true;
	if (p_core_2e_w__muldiv__result.commit()) changed = true;
	if (p_core_2e_w__program__counter.commit()) changed = true;
	if (p_core_2e_writeback__select_24_124.commit()) changed = true;
	if (p_core_2e_writeback__select_24_141.commit()) changed = true;
	if (p_core_2e_writeback__select_24_444.commit()) changed = true;
	if (p_core_2e_x__arbitration____valid.commit()) changed = true;
	if (p_core_2e_x__instruction.commit()) changed = true;
	if (p_core_2e_x__program__counter.commit()) changed = true;
	if (p_core_2e_x__rs1__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs1__value__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__is__forwarded.commit()) changed = true;
	if (p_core_2e_x__rs2__value__forwarded.commit()) changed = true;
	if (p_core_2e___0__.commit()) changed = true;
	if (p_core_2e___1__.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__ADDR.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__DATA.commit()) changed = true;
	if (i_flatten_5c_core_2e__24_memwr_24__5c_register__file_24_tilelink__soc_2e_v_3a_1351_24_33__EN.commit()) changed = true;
	prev_p_clk = p_clk;
	if (memory_p_tl__ram_2e_memory.commit()) changed = true;
	if (memory_p_core_2e_register__file.commit()) changed = true;
	return changed;
}

CXXRTL_EXTREMELY_COLD
void p_top::debug_info(debug_items &items, std::string path) {
	assert(path.empty() || path[path.size() - 1] == ' ');
	static const value<1> const_p_tl__rom__arbiter_2e_initial = value<1>{0u};
	items.add(path + "tl_rom_arbiter initial", debug_item(const_p_tl__rom__arbiter_2e_initial, 0));
	items.add(path + "tl_rom_arbiter $13", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $17", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $23", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $29", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $3", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $33", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $37", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $41", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $43", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter $9", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter bus__a__param", debug_item(const_p_tl__rom__arbiter_2e_bus____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter bus__d__denied", debug_item(const_p_tl__rom__arbiter_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter bus__d__param", debug_item(const_p_tl__rom__arbiter_2e_bus____d____param, 0));
	items.add(path + "tl_rom_arbiter clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_rom_arbiter rr_grant", debug_item(debug_alias(), p_tl__rom__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_rom_arbiter rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____a____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__a__param", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__denied", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter tl_data_rom__d__param", debug_item(const_p_tl__rom__arbiter_2e_tl__data__rom____d____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____corrupt, 0));
	static const value<32> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__data", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____data, 0));
	static const value<3> const_p_tl__rom__arbiter_2e_tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__a__param", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__corrupt", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____corrupt, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__denied", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____denied, 0));
	static const value<2> const_p_tl__rom__arbiter_2e_tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter tl_instr_rom__d__param", debug_item(const_p_tl__rom__arbiter_2e_tl__instr__rom____d____param, 0));
	items.add(path + "tl_rom_arbiter rr valid", debug_item(p_tl__rom__arbiter_2e_rr_2e_valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom_arbiter rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_rom_arbiter rr grant", debug_item(p_tl__rom__arbiter_2e_rr_2e_grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom_arbiter rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__rom__arbiter_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_rom_arbiter rr initial", debug_item(const_p_tl__rom__arbiter_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__rom_2e_initial = value<1>{0u};
	items.add(path + "tl_rom initial", debug_item(const_p_tl__rom_2e_initial, 0));
	static const value<1> const_p_tl__rom_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom bus__a__corrupt", debug_item(const_p_tl__rom_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__rom_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_rom bus__a__param", debug_item(const_p_tl__rom_2e_bus____a____param, 0));
	static const value<1> const_p_tl__rom_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom bus__d__corrupt", debug_item(const_p_tl__rom_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__rom_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom bus__d__denied", debug_item(const_p_tl__rom_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__rom_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_rom bus__d__param", debug_item(const_p_tl__rom_2e_bus____d____param, 0));
	items.add(path + "tl_rom clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_rom last_a__address", debug_item(p_tl__rom_2e_last__a____address, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__corrupt", debug_item(p_tl__rom_2e_last__a____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__data", debug_item(p_tl__rom_2e_last__a____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__mask", debug_item(p_tl__rom_2e_last__a____mask, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__opcode", debug_item(p_tl__rom_2e_last__a____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__param", debug_item(p_tl__rom_2e_last__a____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__ready", debug_item(p_tl__rom_2e_last__a____ready, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__size", debug_item(p_tl__rom_2e_last__a____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__source", debug_item(p_tl__rom_2e_last__a____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom last_a__valid", debug_item(p_tl__rom_2e_last__a____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_rom memory_r_data", debug_item(debug_alias(), p_tl__rom_2e___0__, 0));
	items.add(path + "tl_rom rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_rom _0_", debug_item(p_tl__rom_2e___0__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_tl__ram__arbiter_2e_initial = value<1>{0u};
	items.add(path + "tl_ram_arbiter initial", debug_item(const_p_tl__ram__arbiter_2e_initial, 0));
	items.add(path + "tl_ram_arbiter $13", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $17", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $23", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $29", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $3", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $33", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $37", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $41", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $43", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter $9", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter bus__a__param", debug_item(const_p_tl__ram__arbiter_2e_bus____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter bus__d__denied", debug_item(const_p_tl__ram__arbiter_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter bus__d__param", debug_item(const_p_tl__ram__arbiter_2e_bus____d____param, 0));
	items.add(path + "tl_ram_arbiter clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_ram_arbiter rr_grant", debug_item(debug_alias(), p_tl__ram__arbiter_2e_rr_2e_grant, 0));
	items.add(path + "tl_ram_arbiter rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____a____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__a__param", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__denied", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter tl_data_ram__d__param", debug_item(const_p_tl__ram__arbiter_2e_tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____corrupt, 0));
	static const value<32> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__data", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____data, 0));
	static const value<3> const_p_tl__ram__arbiter_2e_tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__a__param", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__corrupt", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____corrupt, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__denied", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____denied, 0));
	static const value<2> const_p_tl__ram__arbiter_2e_tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter tl_instr_ram__d__param", debug_item(const_p_tl__ram__arbiter_2e_tl__instr__ram____d____param, 0));
	items.add(path + "tl_ram_arbiter rr valid", debug_item(p_tl__ram__arbiter_2e_rr_2e_valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram_arbiter rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram_arbiter rr grant", debug_item(p_tl__ram__arbiter_2e_rr_2e_grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram_arbiter rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__ram__arbiter_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_ram_arbiter rr initial", debug_item(const_p_tl__ram__arbiter_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__ram_2e_initial = value<1>{0u};
	items.add(path + "tl_ram initial", debug_item(const_p_tl__ram_2e_initial, 0));
	static const value<1> const_p_tl__ram_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram bus__a__corrupt", debug_item(const_p_tl__ram_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__ram_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_ram bus__a__param", debug_item(const_p_tl__ram_2e_bus____a____param, 0));
	static const value<1> const_p_tl__ram_2e_bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram bus__d__corrupt", debug_item(const_p_tl__ram_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__ram_2e_bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram bus__d__denied", debug_item(const_p_tl__ram_2e_bus____d____denied, 0));
	static const value<2> const_p_tl__ram_2e_bus____d____param = value<2>{0u};
	items.add(path + "tl_ram bus__d__param", debug_item(const_p_tl__ram_2e_bus____d____param, 0));
	items.add(path + "tl_ram clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_ram last_a__address", debug_item(p_tl__ram_2e_last__a____address, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__corrupt", debug_item(p_tl__ram_2e_last__a____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__data", debug_item(p_tl__ram_2e_last__a____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__mask", debug_item(p_tl__ram_2e_last__a____mask, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__opcode", debug_item(p_tl__ram_2e_last__a____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__param", debug_item(p_tl__ram_2e_last__a____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__ready", debug_item(p_tl__ram_2e_last__a____ready, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__size", debug_item(p_tl__ram_2e_last__a____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__source", debug_item(p_tl__ram_2e_last__a____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram last_a__valid", debug_item(p_tl__ram_2e_last__a____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_ram memory_r_data", debug_item(debug_alias(), p_tl__ram_2e___0__, 0));
	items.add(path + "tl_ram rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_ram _0_", debug_item(p_tl__ram_2e___0__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_tl__periph_2e_initial = value<1>{0u};
	items.add(path + "tl_periph initial", debug_item(const_p_tl__periph_2e_initial, 0));
	items.add(path + "tl_periph bus__d__corrupt", debug_item(p_tl__periph_2e_bus____d____corrupt, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__data", debug_item(p_tl__periph_2e_bus____d____data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__denied", debug_item(p_tl__periph_2e_bus____d____denied, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__opcode", debug_item(p_tl__periph_2e_bus____d____opcode, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__param", debug_item(p_tl__periph_2e_bus____d____param, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__size", debug_item(p_tl__periph_2e_bus____d____size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__source", debug_item(p_tl__periph_2e_bus____d____source, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph bus__d__valid", debug_item(p_tl__periph_2e_bus____d____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_periph cycle_count", debug_item(p_tl__periph_2e_cycle__count, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph halt_simulator", debug_item(p_tl__periph_2e_halt__simulator, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph output", debug_item(p_tl__periph_2e_output, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph output_valid", debug_item(p_tl__periph_2e_output__valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_periph rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__instr__decoder_2e_initial = value<1>{0u};
	items.add(path + "tl_instr_decoder initial", debug_item(const_p_tl__instr__decoder_2e_initial, 0));
	items.add(path + "tl_instr_decoder _bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__a__corrupt", debug_item(const_p_tl__instr__decoder_2e___bus____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e___bus____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder _bus__a__data", debug_item(const_p_tl__instr__decoder_2e___bus____a____data, 0));
	static const value<4> const_p_tl__instr__decoder_2e___bus____a____mask = value<4>{0xfu};
	items.add(path + "tl_instr_decoder _bus__a__mask", debug_item(const_p_tl__instr__decoder_2e___bus____a____mask, 0));
	static const value<3> const_p_tl__instr__decoder_2e___bus____a____opcode = value<3>{0x4u};
	items.add(path + "tl_instr_decoder _bus__a__opcode", debug_item(const_p_tl__instr__decoder_2e___bus____a____opcode, 0));
	static const value<3> const_p_tl__instr__decoder_2e___bus____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder _bus__a__param", debug_item(const_p_tl__instr__decoder_2e___bus____a____param, 0));
	static const value<2> const_p_tl__instr__decoder_2e___bus____a____size = value<2>{0x2u};
	items.add(path + "tl_instr_decoder _bus__a__size", debug_item(const_p_tl__instr__decoder_2e___bus____a____size, 0));
	items.add(path + "tl_instr_decoder _bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__d__corrupt", debug_item(const_p_tl__instr__decoder_2e___bus____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder _bus__d__denied", debug_item(const_p_tl__instr__decoder_2e___bus____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e___bus____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder _bus__d__param", debug_item(const_p_tl__instr__decoder_2e___bus____d____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e___bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_instr_decoder _bus__d__ready", debug_item(const_p_tl__instr__decoder_2e___bus____d____ready, 0));
	items.add(path + "tl_instr_decoder clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_instr_decoder rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e_tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__data", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____data, 0));
	static const value<3> const_p_tl__instr__decoder_2e_tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__a__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____a____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__denied", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e_tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder tl_instr_ram__d__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__ram____d____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____corrupt, 0));
	static const value<32> const_p_tl__instr__decoder_2e_tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__data", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____data, 0));
	static const value<3> const_p_tl__instr__decoder_2e_tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__a__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____a____param, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__corrupt", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder_2e_tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__denied", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____denied, 0));
	static const value<2> const_p_tl__instr__decoder_2e_tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder tl_instr_rom__d__param", debug_item(const_p_tl__instr__decoder_2e_tl__instr__rom____d____param, 0));
	items.add(path + "tl_instr_decoder rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_instr_decoder rr last_grant", debug_item(p_tl__instr__decoder_2e_rr_2e_last__grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_instr_decoder rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__instr__decoder_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_instr_decoder rr initial", debug_item(const_p_tl__instr__decoder_2e_rr_2e_initial, 0));
	static const value<1> const_p_tl__data__decoder_2e_initial = value<1>{0u};
	items.add(path + "tl_data_decoder initial", debug_item(const_p_tl__data__decoder_2e_initial, 0));
	items.add(path + "tl_data_decoder _bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_tl__data__decoder_2e___bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder _bus__a__corrupt", debug_item(const_p_tl__data__decoder_2e___bus____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e___bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder _bus__a__param", debug_item(const_p_tl__data__decoder_2e___bus____a____param, 0));
	items.add(path + "tl_data_decoder _bus__a__size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "tl_data_decoder _bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	static const value<1> const_p_tl__data__decoder_2e___bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_data_decoder _bus__d__ready", debug_item(const_p_tl__data__decoder_2e___bus____d____ready, 0));
	static const value<1> const_p_tl__data__decoder_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder bus__a__corrupt", debug_item(const_p_tl__data__decoder_2e_bus____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder bus__a__param", debug_item(const_p_tl__data__decoder_2e_bus____a____param, 0));
	items.add(path + "tl_data_decoder bus__d__corrupt", debug_item(debug_alias(), p_tl__periph_2e_bus____d____corrupt, 0));
	items.add(path + "tl_data_decoder bus__d__data", debug_item(debug_alias(), p_tl__periph_2e_bus____d____data, 0));
	items.add(path + "tl_data_decoder bus__d__denied", debug_item(debug_alias(), p_tl__periph_2e_bus____d____denied, 0));
	items.add(path + "tl_data_decoder bus__d__opcode", debug_item(debug_alias(), p_tl__periph_2e_bus____d____opcode, 0));
	items.add(path + "tl_data_decoder bus__d__param", debug_item(debug_alias(), p_tl__periph_2e_bus____d____param, 0));
	items.add(path + "tl_data_decoder bus__d__size", debug_item(debug_alias(), p_tl__periph_2e_bus____d____size, 0));
	items.add(path + "tl_data_decoder bus__d__source", debug_item(debug_alias(), p_tl__periph_2e_bus____d____source, 0));
	items.add(path + "tl_data_decoder bus__d__valid", debug_item(debug_alias(), p_tl__periph_2e_bus____d____valid, 0));
	items.add(path + "tl_data_decoder clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "tl_data_decoder rst", debug_item(debug_alias(), p_rst, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__a__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__a__param", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__denied", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____denied, 0));
	static const value<2> const_p_tl__data__decoder_2e_tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder tl_data_ram__d__param", debug_item(const_p_tl__data__decoder_2e_tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__a__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____a____corrupt, 0));
	static const value<3> const_p_tl__data__decoder_2e_tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__a__param", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__corrupt", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder_2e_tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__denied", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____denied, 0));
	static const value<2> const_p_tl__data__decoder_2e_tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder tl_data_rom__d__param", debug_item(const_p_tl__data__decoder_2e_tl__data__rom____d____param, 0));
	items.add(path + "tl_data_decoder rr rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "tl_data_decoder rr last_grant", debug_item(p_tl__data__decoder_2e_rr_2e_last__grant, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "tl_data_decoder rr clk", debug_item(debug_alias(), p_clk, 0));
	static const value<1> const_p_tl__data__decoder_2e_rr_2e_initial = value<1>{0u};
	items.add(path + "tl_data_decoder rr initial", debug_item(const_p_tl__data__decoder_2e_rr_2e_initial, 0));
	static const value<1> const_p_instruction__master_2e_initial = value<1>{0u};
	items.add(path + "instruction_master initial", debug_item(const_p_instruction__master_2e_initial, 0));
	items.add(path + "instruction_master bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_instruction__master_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "instruction_master bus__a__corrupt", debug_item(const_p_instruction__master_2e_bus____a____corrupt, 0));
	static const value<4> const_p_instruction__master_2e_bus____a____mask = value<4>{0xfu};
	items.add(path + "instruction_master bus__a__mask", debug_item(const_p_instruction__master_2e_bus____a____mask, 0));
	static const value<3> const_p_instruction__master_2e_bus____a____opcode = value<3>{0x4u};
	items.add(path + "instruction_master bus__a__opcode", debug_item(const_p_instruction__master_2e_bus____a____opcode, 0));
	static const value<3> const_p_instruction__master_2e_bus____a____param = value<3>{0u};
	items.add(path + "instruction_master bus__a__param", debug_item(const_p_instruction__master_2e_bus____a____param, 0));
	static const value<2> const_p_instruction__master_2e_bus____a____size = value<2>{0x2u};
	items.add(path + "instruction_master bus__a__size", debug_item(const_p_instruction__master_2e_bus____a____size, 0));
	items.add(path + "instruction_master bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<1> const_p_instruction__master_2e_bus____d____ready = value<1>{0x1u};
	items.add(path + "instruction_master bus__d__ready", debug_item(const_p_instruction__master_2e_bus____d____ready, 0));
	items.add(path + "instruction_master clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "instruction_master data", debug_item(p_instruction__master_2e_data, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master data$18", debug_item(p_instruction__master_2e_data_24_18, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master read_ptr", debug_item(p_instruction__master_2e_read__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "instruction_master rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "instruction_master send_ptr", debug_item(p_instruction__master_2e_send__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master state", debug_item(p_instruction__master_2e_state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "instruction_master state$5", debug_item(p_instruction__master_2e_state_24_5, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_data__master_2e_initial = value<1>{0u};
	items.add(path + "data_master initial", debug_item(const_p_data__master_2e_initial, 0));
	items.add(path + "data_master addr_low", debug_item(p_data__master_2e_addr__low, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master addr_low$46", debug_item(p_data__master_2e_addr__low_24_46, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_data__master_2e_bus____a____corrupt = value<1>{0u};
	items.add(path + "data_master bus__a__corrupt", debug_item(const_p_data__master_2e_bus____a____corrupt, 0));
	static const value<3> const_p_data__master_2e_bus____a____param = value<3>{0u};
	items.add(path + "data_master bus__a__param", debug_item(const_p_data__master_2e_bus____a____param, 0));
	items.add(path + "data_master bus__a__size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "data_master bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	static const value<1> const_p_data__master_2e_bus____d____ready = value<1>{0x1u};
	items.add(path + "data_master bus__d__ready", debug_item(const_p_data__master_2e_bus____d____ready, 0));
	items.add(path + "data_master clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "data_master data$62", debug_item(p_data__master_2e_data_24_62, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master data$63", debug_item(p_data__master_2e_data_24_63, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master read_ptr", debug_item(p_data__master_2e_read__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "data_master req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "data_master req_size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "data_master req_unsigned", debug_item(debug_alias(), p_core_2e_mem__unsigned_24_310, 0));
	items.add(path + "data_master req_we", debug_item(debug_alias(), p_core_2e_mem__we_24_308, 0));
	items.add(path + "data_master rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "data_master send_ptr", debug_item(p_data__master_2e_send__ptr, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master size", debug_item(p_data__master_2e_size, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master size$40", debug_item(p_data__master_2e_size_24_40, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master state", debug_item(p_data__master_2e_state, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master state$5", debug_item(p_data__master_2e_state_24_5, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master unsigned", debug_item(p_data__master_2e_unsigned, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "data_master unsigned$43", debug_item(p_data__master_2e_unsigned_24_43, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_initial = value<1>{0u};
	items.add(path + "core initial", debug_item(const_p_core_2e_initial, 0));
	static const value<1> const_p_core_2e__24_288 = value<1>{0x1u};
	items.add(path + "core $288", debug_item(const_p_core_2e__24_288, 0));
	static const value<1> const_p_core_2e__24_294 = value<1>{0x1u};
	items.add(path + "core $294", debug_item(const_p_core_2e__24_294, 0));
	static const value<1> const_p_core_2e__24_313 = value<1>{0x1u};
	items.add(path + "core $313", debug_item(const_p_core_2e__24_313, 0));
	static const value<1> const_p_core_2e__24_319 = value<1>{0x1u};
	items.add(path + "core $319", debug_item(const_p_core_2e__24_319, 0));
	static const value<1> const_p_core_2e__24_325 = value<1>{0x1u};
	items.add(path + "core $325", debug_item(const_p_core_2e__24_325, 0));
	static const value<1> const_p_core_2e__24_331 = value<1>{0x1u};
	items.add(path + "core $331", debug_item(const_p_core_2e__24_331, 0));
	static const value<1> const_p_core_2e__24_337 = value<1>{0x1u};
	items.add(path + "core $337", debug_item(const_p_core_2e__24_337, 0));
	static const value<1> const_p_core_2e__24_34 = value<1>{0x1u};
	items.add(path + "core $34", debug_item(const_p_core_2e__24_34, 0));
	static const value<1> const_p_core_2e__24_343 = value<1>{0x1u};
	items.add(path + "core $343", debug_item(const_p_core_2e__24_343, 0));
	static const value<1> const_p_core_2e__24_351 = value<1>{0x1u};
	items.add(path + "core $351", debug_item(const_p_core_2e__24_351, 0));
	static const value<1> const_p_core_2e__24_361 = value<1>{0x1u};
	items.add(path + "core $361", debug_item(const_p_core_2e__24_361, 0));
	static const value<1> const_p_core_2e__24_371 = value<1>{0x1u};
	items.add(path + "core $371", debug_item(const_p_core_2e__24_371, 0));
	static const value<1> const_p_core_2e__24_381 = value<1>{0x1u};
	items.add(path + "core $381", debug_item(const_p_core_2e__24_381, 0));
	static const value<1> const_p_core_2e__24_391 = value<1>{0x1u};
	items.add(path + "core $391", debug_item(const_p_core_2e__24_391, 0));
	static const value<1> const_p_core_2e__24_411 = value<1>{0x1u};
	items.add(path + "core $411", debug_item(const_p_core_2e__24_411, 0));
	static const value<1> const_p_core_2e__24_419 = value<1>{0x1u};
	items.add(path + "core $419", debug_item(const_p_core_2e__24_419, 0));
	static const value<1> const_p_core_2e__24_425 = value<1>{0x1u};
	items.add(path + "core $425", debug_item(const_p_core_2e__24_425, 0));
	static const value<1> const_p_core_2e__24_447 = value<1>{0x1u};
	items.add(path + "core $447", debug_item(const_p_core_2e__24_447, 0));
	static const value<1> const_p_core_2e__24_453 = value<1>{0x1u};
	items.add(path + "core $453", debug_item(const_p_core_2e__24_453, 0));
	static const value<1> const_p_core_2e__24_459 = value<1>{0x1u};
	items.add(path + "core $459", debug_item(const_p_core_2e__24_459, 0));
	static const value<1> const_p_core_2e__24_475 = value<1>{0x1u};
	items.add(path + "core $475", debug_item(const_p_core_2e__24_475, 0));
	static const value<1> const_p_core_2e_a__arbitration____halted__by__self = value<1>{0u};
	items.add(path + "core a_arbitration__halted_by_self", debug_item(const_p_core_2e_a__arbitration____halted__by__self, 0));
	items.add(path + "core a_arbitration__valid", debug_item(p_core_2e_a__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core a_program_counter", debug_item(p_core_2e_a__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_left_select$179", debug_item(p_core_2e_alu__left__select_24_179, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_left_select$303", debug_item(p_core_2e_alu__left__select_24_303, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_left_select$435", debug_item(p_core_2e_alu__left__select_24_435, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_mode_switch$178", debug_item(p_core_2e_alu__mode__switch_24_178, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_mode_switch$302", debug_item(p_core_2e_alu__mode__switch_24_302, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_mode_switch$434", debug_item(p_core_2e_alu__mode__switch_24_434, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_operation$177", debug_item(p_core_2e_alu__operation_24_177, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_operation$301", debug_item(p_core_2e_alu__operation_24_301, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_operation$433", debug_item(p_core_2e_alu__operation_24_433, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_right_select$180", debug_item(p_core_2e_alu__right__select_24_180, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_right_select$304", debug_item(p_core_2e_alu__right__select_24_304, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core alu_right_select$436", debug_item(p_core_2e_alu__right__select_24_436, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_mode$181", debug_item(p_core_2e_branch__mode_24_181, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_mode$305", debug_item(p_core_2e_branch__mode_24_305, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_mode$437", debug_item(p_core_2e_branch__mode_24_437, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_type$182", debug_item(p_core_2e_branch__type_24_182, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_type$306", debug_item(p_core_2e_branch__type_24_306, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core branch_type$438", debug_item(p_core_2e_branch__type_24_438, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core clk", debug_item(debug_alias(), p_clk, 0));
	items.add(path + "core d_arbitration__valid", debug_item(p_core_2e_d__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core d_program_counter", debug_item(p_core_2e_d__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core f_arbitration__valid", debug_item(p_core_2e_f__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core f_program_counter", debug_item(p_core_2e_f__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core immediate$176", debug_item(p_core_2e_immediate_24_176, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core immediate$300", debug_item(p_core_2e_immediate_24_300, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core immediate$432", debug_item(p_core_2e_immediate_24_432, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_alu_result", debug_item(p_core_2e_m__alu__result, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_m__arbitration____remove = value<1>{0u};
	items.add(path + "core m_arbitration__remove", debug_item(const_p_core_2e_m__arbitration____remove, 0));
	items.add(path + "core m_arbitration__valid", debug_item(p_core_2e_m__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_branch_taken", debug_item(p_core_2e_m__branch__taken, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_branch_target", debug_item(p_core_2e_m__branch__target, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_instruction", debug_item(p_core_2e_m__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_muldiv_result", debug_item(p_core_2e_m__muldiv__result, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_program_counter", debug_item(p_core_2e_m__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core m_rs2_value", debug_item(p_core_2e_m__rs2__value, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_enable$183", debug_item(p_core_2e_mem__enable_24_183, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_enable$307", debug_item(p_core_2e_mem__enable_24_307, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_enable$439", debug_item(p_core_2e_mem__enable_24_439, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_size$185", debug_item(p_core_2e_mem__size_24_185, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_size$309", debug_item(p_core_2e_mem__size_24_309, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_size$441", debug_item(p_core_2e_mem__size_24_441, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_unsigned$186", debug_item(p_core_2e_mem__unsigned_24_186, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_unsigned$310", debug_item(p_core_2e_mem__unsigned_24_310, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_unsigned$442", debug_item(p_core_2e_mem__unsigned_24_442, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_we$184", debug_item(p_core_2e_mem__we_24_184, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_we$308", debug_item(p_core_2e_mem__we_24_308, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core mem_we$440", debug_item(p_core_2e_mem__we_24_440, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rd$132", debug_item(p_core_2e_rd_24_132, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rd$149", debug_item(p_core_2e_rd_24_149, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rd$431", debug_item(p_core_2e_rd_24_431, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core register_file_r_data", debug_item(debug_alias(), p_core_2e___0__, 0));
	items.add(path + "core register_file_r_data$10", debug_item(debug_alias(), p_core_2e___1__, 0));
	items.add(path + "core register_file_w_addr", debug_item(debug_alias(), p_core_2e_rd_24_431, 0));
	items.add(path + "core register_write$129", debug_item(p_core_2e_register__write_24_129, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core register_write$146", debug_item(p_core_2e_register__write_24_146, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core register_write$443", debug_item(p_core_2e_register__write_24_443, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "core req_addr$1", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "core req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "core req_size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "core req_unsigned", debug_item(debug_alias(), p_core_2e_mem__unsigned_24_310, 0));
	items.add(path + "core req_we", debug_item(debug_alias(), p_core_2e_mem__we_24_308, 0));
	items.add(path + "core rs1$174", debug_item(p_core_2e_rs1_24_174, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rs1$298", debug_item(p_core_2e_rs1_24_298, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rs1$429", debug_item(p_core_2e_rs1_24_429, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rs2$175", debug_item(p_core_2e_rs2_24_175, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rs2$299", debug_item(p_core_2e_rs2_24_299, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rs2$430", debug_item(p_core_2e_rs2_24_430, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core rst", debug_item(debug_alias(), p_rst, 0));
	items.add(path + "core w_alu_result", debug_item(p_core_2e_w__alu__result, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_w__arbitration____halted__by__next = value<1>{0u};
	items.add(path + "core w_arbitration__halted_by_next", debug_item(const_p_core_2e_w__arbitration____halted__by__next, 0));
	static const value<1> const_p_core_2e_w__arbitration____remove = value<1>{0u};
	items.add(path + "core w_arbitration__remove", debug_item(const_p_core_2e_w__arbitration____remove, 0));
	items.add(path + "core w_arbitration__valid", debug_item(p_core_2e_w__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_instruction", debug_item(p_core_2e_w__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_muldiv_result", debug_item(p_core_2e_w__muldiv__result, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core w_program_counter", debug_item(p_core_2e_w__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core writeback_select$124", debug_item(p_core_2e_writeback__select_24_124, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core writeback_select$141", debug_item(p_core_2e_writeback__select_24_141, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core writeback_select$444", debug_item(p_core_2e_writeback__select_24_444, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_x__arbitration____halted__by__self = value<1>{0u};
	items.add(path + "core x_arbitration__halted_by_self", debug_item(const_p_core_2e_x__arbitration____halted__by__self, 0));
	items.add(path + "core x_arbitration__valid", debug_item(p_core_2e_x__arbitration____valid, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_instruction", debug_item(p_core_2e_x__instruction, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_program_counter", debug_item(p_core_2e_x__program__counter, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_is_forwarded", debug_item(p_core_2e_x__rs1__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_forwarded", debug_item(p_core_2e_x__rs1__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs1_value_read", debug_item(debug_alias(), p_core_2e___0__, 0));
	items.add(path + "core x_rs2_is_forwarded", debug_item(p_core_2e_x__rs2__is__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_forwarded", debug_item(p_core_2e_x__rs2__value__forwarded, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core x_rs2_value_read", debug_item(debug_alias(), p_core_2e___1__, 0));
	items.add(path + "core _0_", debug_item(p_core_2e___0__, 0, debug_item::DRIVEN_SYNC));
	items.add(path + "core _1_", debug_item(p_core_2e___1__, 0, debug_item::DRIVEN_SYNC));
	static const value<1> const_p_core_2e_decoder_2e_initial = value<1>{0u};
	items.add(path + "core decoder initial", debug_item(const_p_core_2e_decoder_2e_initial, 0));
	static const value<2> const_p_tl__rom__bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_bus__d__param", debug_item(const_p_tl__rom__bus____d____param, 0));
	static const value<1> const_p_tl__rom__bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_bus__d__denied", debug_item(const_p_tl__rom__bus____d____denied, 0));
	static const value<1> const_p_tl__rom__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_bus__d__corrupt", debug_item(const_p_tl__rom__bus____d____corrupt, 0));
	static const value<3> const_p_tl__rom__bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_bus__a__param", debug_item(const_p_tl__rom__bus____a____param, 0));
	static const value<1> const_p_tl__rom__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_bus__a__corrupt", debug_item(const_p_tl__rom__bus____a____corrupt, 0));
	static const value<2> const_p_tl__rom__arbiter__bus____d____param = value<2>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__param", debug_item(const_p_tl__rom__arbiter__bus____d____param, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____d____denied = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__denied", debug_item(const_p_tl__rom__arbiter__bus____d____denied, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__d__corrupt", debug_item(const_p_tl__rom__arbiter__bus____d____corrupt, 0));
	static const value<3> const_p_tl__rom__arbiter__bus____a____param = value<3>{0u};
	items.add(path + "tl_rom_arbiter_bus__a__param", debug_item(const_p_tl__rom__arbiter__bus____a____param, 0));
	static const value<1> const_p_tl__rom__arbiter__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_rom_arbiter_bus__a__corrupt", debug_item(const_p_tl__rom__arbiter__bus____a____corrupt, 0));
	static const value<2> const_p_tl__ram__bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_bus__d__param", debug_item(const_p_tl__ram__bus____d____param, 0));
	static const value<1> const_p_tl__ram__bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_bus__d__denied", debug_item(const_p_tl__ram__bus____d____denied, 0));
	static const value<1> const_p_tl__ram__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_bus__d__corrupt", debug_item(const_p_tl__ram__bus____d____corrupt, 0));
	static const value<3> const_p_tl__ram__bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_bus__a__param", debug_item(const_p_tl__ram__bus____a____param, 0));
	static const value<1> const_p_tl__ram__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_bus__a__corrupt", debug_item(const_p_tl__ram__bus____a____corrupt, 0));
	static const value<2> const_p_tl__ram__arbiter__bus____d____param = value<2>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__param", debug_item(const_p_tl__ram__arbiter__bus____d____param, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____d____denied = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__denied", debug_item(const_p_tl__ram__arbiter__bus____d____denied, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__d__corrupt", debug_item(const_p_tl__ram__arbiter__bus____d____corrupt, 0));
	static const value<3> const_p_tl__ram__arbiter__bus____a____param = value<3>{0u};
	items.add(path + "tl_ram_arbiter_bus__a__param", debug_item(const_p_tl__ram__arbiter__bus____a____param, 0));
	static const value<1> const_p_tl__ram__arbiter__bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_ram_arbiter_bus__a__corrupt", debug_item(const_p_tl__ram__arbiter__bus____a____corrupt, 0));
	items.add(path + "tl_periph_output_valid", debug_item(debug_alias(), p_tl__periph_2e_output__valid, 0));
	items.add(path + "tl_periph_output", debug_item(debug_alias(), p_tl__periph_2e_output, 0));
	items.add(path + "tl_periph_halt_simulator", debug_item(debug_alias(), p_tl__periph_2e_halt__simulator, 0));
	static const value<2> const_p_tl__instr__decoder__tl__instr__rom____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__param", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____param, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__denied", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__d__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__rom____d____corrupt, 0));
	static const value<3> const_p_tl__instr__decoder__tl__instr__rom____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__param", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____param, 0));
	static const value<32> const_p_tl__instr__decoder__tl__instr__rom____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__data", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____data, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_rom__a__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__rom____a____corrupt, 0));
	static const value<2> const_p_tl__instr__decoder__tl__instr__ram____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__param", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____param, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__denied", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__d__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__ram____d____corrupt, 0));
	static const value<3> const_p_tl__instr__decoder__tl__instr__ram____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__param", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____param, 0));
	static const value<32> const_p_tl__instr__decoder__tl__instr__ram____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__data", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____data, 0));
	static const value<1> const_p_tl__instr__decoder__tl__instr__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder_tl_instr_ram__a__corrupt", debug_item(const_p_tl__instr__decoder__tl__instr__ram____a____corrupt, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_instr_decoder__bus__d__ready", debug_item(const_p_tl__instr__decoder____bus____d____ready, 0));
	static const value<2> const_p_tl__instr__decoder____bus____d____param = value<2>{0u};
	items.add(path + "tl_instr_decoder__bus__d__param", debug_item(const_p_tl__instr__decoder____bus____d____param, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____denied = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__d__denied", debug_item(const_p_tl__instr__decoder____bus____d____denied, 0));
	static const value<1> const_p_tl__instr__decoder____bus____d____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__d__corrupt", debug_item(const_p_tl__instr__decoder____bus____d____corrupt, 0));
	items.add(path + "tl_instr_decoder__bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<2> const_p_tl__instr__decoder____bus____a____size = value<2>{0x2u};
	items.add(path + "tl_instr_decoder__bus__a__size", debug_item(const_p_tl__instr__decoder____bus____a____size, 0));
	static const value<3> const_p_tl__instr__decoder____bus____a____param = value<3>{0u};
	items.add(path + "tl_instr_decoder__bus__a__param", debug_item(const_p_tl__instr__decoder____bus____a____param, 0));
	static const value<3> const_p_tl__instr__decoder____bus____a____opcode = value<3>{0x4u};
	items.add(path + "tl_instr_decoder__bus__a__opcode", debug_item(const_p_tl__instr__decoder____bus____a____opcode, 0));
	static const value<4> const_p_tl__instr__decoder____bus____a____mask = value<4>{0xfu};
	items.add(path + "tl_instr_decoder__bus__a__mask", debug_item(const_p_tl__instr__decoder____bus____a____mask, 0));
	static const value<32> const_p_tl__instr__decoder____bus____a____data = value<32>{0u};
	items.add(path + "tl_instr_decoder__bus__a__data", debug_item(const_p_tl__instr__decoder____bus____a____data, 0));
	static const value<1> const_p_tl__instr__decoder____bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_instr_decoder__bus__a__corrupt", debug_item(const_p_tl__instr__decoder____bus____a____corrupt, 0));
	items.add(path + "tl_instr_decoder__bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<2> const_p_tl__data__decoder__tl__data__rom____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__param", debug_item(const_p_tl__data__decoder__tl__data__rom____d____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__denied", debug_item(const_p_tl__data__decoder__tl__data__rom____d____denied, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__d__corrupt", debug_item(const_p_tl__data__decoder__tl__data__rom____d____corrupt, 0));
	static const value<3> const_p_tl__data__decoder__tl__data__rom____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__a__param", debug_item(const_p_tl__data__decoder__tl__data__rom____a____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__rom____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_rom__a__corrupt", debug_item(const_p_tl__data__decoder__tl__data__rom____a____corrupt, 0));
	static const value<2> const_p_tl__data__decoder__tl__data__ram____d____param = value<2>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__param", debug_item(const_p_tl__data__decoder__tl__data__ram____d____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____d____denied = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__denied", debug_item(const_p_tl__data__decoder__tl__data__ram____d____denied, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____d____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__d__corrupt", debug_item(const_p_tl__data__decoder__tl__data__ram____d____corrupt, 0));
	static const value<3> const_p_tl__data__decoder__tl__data__ram____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__a__param", debug_item(const_p_tl__data__decoder__tl__data__ram____a____param, 0));
	static const value<1> const_p_tl__data__decoder__tl__data__ram____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder_tl_data_ram__a__corrupt", debug_item(const_p_tl__data__decoder__tl__data__ram____a____corrupt, 0));
	items.add(path + "tl_data_decoder_bus__d__valid", debug_item(debug_alias(), p_tl__periph_2e_bus____d____valid, 0));
	items.add(path + "tl_data_decoder_bus__d__source", debug_item(debug_alias(), p_tl__periph_2e_bus____d____source, 0));
	items.add(path + "tl_data_decoder_bus__d__size", debug_item(debug_alias(), p_tl__periph_2e_bus____d____size, 0));
	items.add(path + "tl_data_decoder_bus__d__param", debug_item(debug_alias(), p_tl__periph_2e_bus____d____param, 0));
	items.add(path + "tl_data_decoder_bus__d__opcode", debug_item(debug_alias(), p_tl__periph_2e_bus____d____opcode, 0));
	items.add(path + "tl_data_decoder_bus__d__denied", debug_item(debug_alias(), p_tl__periph_2e_bus____d____denied, 0));
	items.add(path + "tl_data_decoder_bus__d__data", debug_item(debug_alias(), p_tl__periph_2e_bus____d____data, 0));
	items.add(path + "tl_data_decoder_bus__d__corrupt", debug_item(debug_alias(), p_tl__periph_2e_bus____d____corrupt, 0));
	static const value<1> const_p_tl__data__decoder____bus____d____ready = value<1>{0x1u};
	items.add(path + "tl_data_decoder__bus__d__ready", debug_item(const_p_tl__data__decoder____bus____d____ready, 0));
	items.add(path + "tl_data_decoder__bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	items.add(path + "tl_data_decoder__bus__a__size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	static const value<3> const_p_tl__data__decoder____bus____a____param = value<3>{0u};
	items.add(path + "tl_data_decoder__bus__a__param", debug_item(const_p_tl__data__decoder____bus____a____param, 0));
	static const value<1> const_p_tl__data__decoder____bus____a____corrupt = value<1>{0u};
	items.add(path + "tl_data_decoder__bus__a__corrupt", debug_item(const_p_tl__data__decoder____bus____a____corrupt, 0));
	items.add(path + "tl_data_decoder__bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "rst", debug_item(p_rst, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	items.add(path + "output_valid", debug_item(debug_alias(), p_tl__periph_2e_output__valid, 0));
	items.add(path + "output", debug_item(debug_alias(), p_tl__periph_2e_output, 0));
	items.add(path + "instruction_master_req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	static const value<1> const_p_instruction__master__bus____d____ready = value<1>{0x1u};
	items.add(path + "instruction_master_bus__d__ready", debug_item(const_p_instruction__master__bus____d____ready, 0));
	items.add(path + "instruction_master_bus__a__source", debug_item(debug_alias(), p_instruction__master_2e_send__ptr, 0));
	static const value<2> const_p_instruction__master__bus____a____size = value<2>{0x2u};
	items.add(path + "instruction_master_bus__a__size", debug_item(const_p_instruction__master__bus____a____size, 0));
	static const value<3> const_p_instruction__master__bus____a____param = value<3>{0u};
	items.add(path + "instruction_master_bus__a__param", debug_item(const_p_instruction__master__bus____a____param, 0));
	static const value<3> const_p_instruction__master__bus____a____opcode = value<3>{0x4u};
	items.add(path + "instruction_master_bus__a__opcode", debug_item(const_p_instruction__master__bus____a____opcode, 0));
	static const value<4> const_p_instruction__master__bus____a____mask = value<4>{0xfu};
	items.add(path + "instruction_master_bus__a__mask", debug_item(const_p_instruction__master__bus____a____mask, 0));
	static const value<1> const_p_instruction__master__bus____a____corrupt = value<1>{0u};
	items.add(path + "instruction_master_bus__a__corrupt", debug_item(const_p_instruction__master__bus____a____corrupt, 0));
	items.add(path + "instruction_master_bus__a__address", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "halt_simulator", debug_item(debug_alias(), p_tl__periph_2e_halt__simulator, 0));
	items.add(path + "data_master_req_we", debug_item(debug_alias(), p_core_2e_mem__we_24_308, 0));
	items.add(path + "data_master_req_unsigned", debug_item(debug_alias(), p_core_2e_mem__unsigned_24_310, 0));
	items.add(path + "data_master_req_size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "data_master_req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "data_master_req_addr", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	static const value<1> const_p_data__master__bus____d____ready = value<1>{0x1u};
	items.add(path + "data_master_bus__d__ready", debug_item(const_p_data__master__bus____d____ready, 0));
	items.add(path + "data_master_bus__a__source", debug_item(debug_alias(), p_data__master_2e_send__ptr, 0));
	items.add(path + "data_master_bus__a__size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	static const value<3> const_p_data__master__bus____a____param = value<3>{0u};
	items.add(path + "data_master_bus__a__param", debug_item(const_p_data__master__bus____a____param, 0));
	static const value<1> const_p_data__master__bus____a____corrupt = value<1>{0u};
	items.add(path + "data_master_bus__a__corrupt", debug_item(const_p_data__master__bus____a____corrupt, 0));
	items.add(path + "data_master_bus__a__address", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "core_req_we", debug_item(debug_alias(), p_core_2e_mem__we_24_308, 0));
	items.add(path + "core_req_unsigned", debug_item(debug_alias(), p_core_2e_mem__unsigned_24_310, 0));
	items.add(path + "core_req_size", debug_item(debug_alias(), p_core_2e_mem__size_24_309, 0));
	items.add(path + "core_req_data", debug_item(debug_alias(), p_core_2e_m__rs2__value, 0));
	items.add(path + "core_req_addr$1", debug_item(debug_alias(), p_core_2e_m__alu__result, 0));
	items.add(path + "core_req_addr", debug_item(debug_alias(), p_core_2e_f__program__counter, 0));
	items.add(path + "clk", debug_item(p_clk, 0, debug_item::INPUT|debug_item::UNDRIVEN));
	static const value<2> const_p_bus____d____param = value<2>{0u};
	items.add(path + "bus__d__param", debug_item(const_p_bus____d____param, 0));
	static const value<1> const_p_bus____d____denied = value<1>{0u};
	items.add(path + "bus__d__denied", debug_item(const_p_bus____d____denied, 0));
	static const value<1> const_p_bus____d____corrupt = value<1>{0u};
	items.add(path + "bus__d__corrupt", debug_item(const_p_bus____d____corrupt, 0));
	static const value<32> const_p_bus____a____data = value<32>{0u};
	items.add(path + "bus__a__data", debug_item(const_p_bus____a____data, 0));
	items.add(path + "tl_rom memory", debug_item(memory_p_tl__rom_2e_memory, 0));
	items.add(path + "tl_ram memory", debug_item(memory_p_tl__ram_2e_memory, 0));
	items.add(path + "core register_file", debug_item(memory_p_core_2e_register__file, 0));
}

} // namespace cxxrtl_design

extern "C"
cxxrtl_toplevel cxxrtl_design_create() {
	return new _cxxrtl_toplevel { std::unique_ptr<cxxrtl_design::p_top>(new cxxrtl_design::p_top) };
}
