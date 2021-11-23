from dataclasses import dataclass
from typing import List

from nmigen import *

from .arbitration import Arbitration
from .isa import Funct3Mul, ExceptionCode
from .decoder import Decoder, ALUOperation, ControlRecord, ALULeft, ALURight, WritebackSelect, BranchMode, BranchType, \
    CSRMode
from .records import InstructionStreamRecord, DataStreamRecord


@dataclass
class CSRPart:
    offset: int
    value: Value
    writable: bool = False

    @property
    def b(self):
        return self.offset

    @property
    def e(self):
        return self.offset + len(self.value)


@dataclass
class CSR:
    number: int
    parts: List[CSRPart]

    @staticmethod
    def single(number, value, writable=False) -> "CSR":
        return CSR(
            number=number,
            parts=[CSRPart(offset=0, value=value, writable=writable)]
        )


class RISCVCore(Elaboratable):
    def __init__(self):
        self.instruction_stream = InstructionStreamRecord()
        self.data_stream = DataStreamRecord()

        self.software_interrupt = Signal()
        self.timer_interrupt = Signal()
        self.external_interrupt = Signal()

    def elaborate(self, platform):
        m = Module()

        #  1 Instruction access fault
        #  -> (any) in decode
        #  0 Instruction address misaligned (raised by control flow instruction)
        #  -> (jal,jalr,brx) in decode (for early branch) or memory
        #  2 Illegal instruction
        #  -> (any) in decode or memory (for csr operations)
        # 11 Environment call from M-mode
        #  -> (ecall) in decode
        #  3 Breakpoint
        #  -> (ebreak) in decode
        #  6 Store / AMO address misaligned
        #  -> (lx,sx) in memory
        #  4 Load address misaligned
        #  -> (lx,sx) in memory
        #  7 Store / AMO access fault
        #  -> (lx,sx) in writeback
        #  5 Load access fault
        #  -> (lx,sx) in writeback

        """
        Control and Status Registers
        """
        csr_list = []

        # Machine Instruction Set Architecture
        #                  ZYXWVUTSRQPONMLKJIHGFEDCBA                 32-bit
        csr_misa = Cat(C(0b00000000000001000100000000, 26), C(0, 4), C(1, 2))
        csr_list.append(CSR.single(number=0x301, value=csr_misa))

        # Machine Vendor ID
        csr_mvendorid = C(0, 32)
        csr_list.append(CSR.single(number=0xf11, value=csr_mvendorid))
        # Machine Architecture ID
        csr_marchid = C(0, 32)
        csr_list.append(CSR.single(number=0xf12, value=csr_marchid))
        # Machine Implementation ID
        csr_mimpid = C(0, 32)
        csr_list.append(CSR.single(number=0xf13, value=csr_mimpid))
        # Machine Hart ID
        csr_mhartid = C(0, 32)
        csr_list.append(CSR.single(number=0xf14, value=csr_mhartid))

        # Machine Status
        # 3:     MIE  -> Machine Interrupt Enable
        # 7:     MPIE -> Machine Previous Interrupt Enable
        # 11-12: MPP  -> Machine Previous Privilege (hardcoded 0b11)
        csr_mstatus_mie = Signal()
        csr_mstatus_mpie = Signal()
        csr_mstatus_mpp = C(0b11, 2)
        csr_list.append(CSR(number=0x300, parts=[
            CSRPart(3, csr_mstatus_mie, writable=True),
            CSRPart(7, csr_mstatus_mpie, writable=True),
            CSRPart(11, csr_mstatus_mpp),
        ]))

        # Machine Trap Vector
        csr_mtvec_base = Signal(unsigned(30))
        csr_list.append(CSR(number=0x305, parts=[
            CSRPart(2, csr_mtvec_base, writable=True),
        ]))

        # MIP: Machine Interrupt Pending
        # MSIP: Machine Software Interrupt Pending
        # MTIP: Machine Timer Interrupt Pending
        # MEIP: Machine External Interrupt Pending
        csr_mip_msip = self.software_interrupt
        csr_mip_mtip = self.timer_interrupt
        csr_mip_meip = self.external_interrupt
        csr_list.append(CSR(number=0x344, parts=[
            CSRPart(3, csr_mip_msip),
            CSRPart(7, csr_mip_mtip),
            CSRPart(11, csr_mip_meip),
        ]))

        # MIE: Machine Interrupt Enable
        # MSIE: Machine Software Interrupt Enable
        # MTIE: Machine Timer Interrupt Enable
        # MEIE: Machine External Interrupt Enable
        csr_mie_msie = Signal()
        csr_mie_mtie = Signal()
        csr_mie_meie = Signal()
        csr_list.append(CSR(number=0x304, parts=[
            CSRPart(3, csr_mie_msie, writable=True),
            CSRPart(7, csr_mie_mtie, writable=True),
            CSRPart(11, csr_mie_meie, writable=True),
        ]))

        # Machine Scratch
        csr_mscratch = Signal(unsigned(32))
        csr_list.append(CSR.single(number=0x340, value=csr_mscratch, writable=True))

        # Machine Exception Program Counter
        csr_mepc = Signal(unsigned(32))
        csr_list.append(CSR.single(number=0x341, value=csr_mepc, writable=True))

        # Machine Interrupt Cause
        csr_mcause_code = Signal(unsigned(4))
        csr_mcause_interrupt = Signal()
        csr_list.append(CSR(number=0x342, parts=[
            CSRPart(0, csr_mcause_code, writable=True),
            CSRPart(31, csr_mcause_interrupt, writable=True),
        ]))

        # Machine Trap Value
        csr_mtval = Signal(unsigned(32))
        csr_list.append(CSR.single(number=0x343, value=csr_mtval, writable=True))

        # Cycle and performance counters
        csr_cycles = Signal(unsigned(64))
        csr_list.append(CSR.single(number=0xc00, value=csr_cycles[0:32]))
        csr_list.append(CSR.single(number=0xc01, value=csr_cycles[0:32]))
        csr_list.append(CSR.single(number=0xc80, value=csr_cycles[32:64]))
        csr_list.append(CSR.single(number=0xc81, value=csr_cycles[32:64]))

        csr_instructions_retired = Signal(unsigned(64))
        csr_list.append(CSR.single(number=0xc02, value=csr_instructions_retired[0:32]))
        csr_list.append(CSR.single(number=0xc82, value=csr_instructions_retired[32:64]))

        """
        Instruction Fetch
        """
        # Arbitration
        f_arbitration = Arbitration(name='f_arbitration')
        f_arbitration.elaborate(m)

        # Program counter
        f_program_counter = Signal(unsigned(32))
        with m.If(f_arbitration.firing):
            m.d.sync += f_program_counter.eq(f_program_counter + 4)

        # Create instruction request
        m.d.comb += [
            self.instruction_stream.req_addr.eq(f_program_counter),
            self.instruction_stream.req_valid.eq(
                f_arbitration.valid &
                ~f_arbitration.halted_by_next &
                ~f_arbitration.remove
            ),
        ]
        m.d.comb += f_arbitration.halted_by_self.eq(f_arbitration.valid & ~self.instruction_stream.req_ready)

        """
        Instruction Decode
        """
        # Arbitration
        d_arbitration = Arbitration(name='d_arbitration')
        d_arbitration.elaborate(m, f_arbitration)
        d_set_exception_pending = Signal()
        d_set_exception_code = Signal(unsigned(4))

        # Program counter
        d_program_counter = Signal(unsigned(32))
        with m.If(d_arbitration.moving):
            m.d.sync += d_program_counter.eq(f_program_counter)

        # Accept instruction response
        m.d.comb += [
            self.instruction_stream.rsp_ready.eq(~d_arbitration.halted_by_next),
            d_arbitration.halted_by_self.eq(
                (d_arbitration.valid | d_arbitration.remove) &
                ~self.instruction_stream.rsp_valid
            ),
        ]

        # Get the intruction from the response data
        d_instruction = Signal(unsigned(32))
        m.d.comb += d_instruction.eq(self.instruction_stream.rsp_data)

        # Decode the instruction
        m.submodules.decoder = decoder = Decoder()
        d_control = ControlRecord()
        m.d.comb += [
            decoder.instruction.eq(d_instruction),
            d_control.eq(decoder.control),
        ]

        # Handle branch if always taken
        # d_early_branch = (d_control.branch_mode == BranchMode.ALWAYS) & (d_control.branch_type == BranchType.PC_REL)
        # d_branch_target = Signal(unsigned(32))
        # m.d.comb += [
        #     d_branch_target.eq(d_program_counter + d_control.immediate),
        #     d_branch_target[0].eq(0),
        # ]
        # with m.If(d_arbitration.firing & ~d_control.exception_pending & d_early_branch):
        #     with m.If(d_branch_target[1] == 0):
        #         m.d.comb += [
        #             a_arbitration.remove.eq(1),
        #             f_arbitration.remove.eq(1),
        #         ]
        #         m.d.sync += a_program_counter.eq(d_branch_target)
        #     with m.Else():
        #         # Raise misaligned instruction exception
        #         m.d.comb += [
        #             d_set_exception_pending.eq(1),
        #             d_set_exception_code.eq(ExceptionCode.INSTRUCTION_ADDRESS_MISALIGNED),
        #         ]

        # Create the register file
        register_file = Memory(width=32, depth=32, init=[0 for _ in range(32)])

        # Create the register file read ports
        d_rs1_read_port = register_file.read_port(transparent=False)
        d_rs2_read_port = register_file.read_port(transparent=False)
        m.submodules += [d_rs1_read_port, d_rs2_read_port]
        m.d.comb += [
            d_rs1_read_port.addr.eq(d_control.rs1),
            d_rs2_read_port.addr.eq(d_control.rs2),
            # Only enable reading the register file if this stage is moving
            d_rs1_read_port.en.eq(d_arbitration.moving),
            d_rs2_read_port.en.eq(d_arbitration.moving),
        ]

        # Forwarded values
        d_rs1_value_forwarded = Signal(unsigned(32))
        d_rs2_value_forwarded = Signal(unsigned(32))
        d_rs1_is_forwarded = Signal()
        d_rs2_is_forwarded = Signal()

        """
        Execute
        """
        # Arbitration
        x_arbitration = Arbitration(name='x_arbitration')
        x_arbitration.elaborate(m, d_arbitration)

        # Get the program counter, instruction and control signals
        x_program_counter = Signal(unsigned(32))
        x_instruction = Signal(unsigned(32))
        x_control = ControlRecord()
        with m.If(x_arbitration.moving):
            m.d.sync += [
                x_program_counter.eq(d_program_counter),
                x_instruction.eq(d_instruction),
                x_control.eq(d_control),
                x_control.exception_pending.eq(d_control.exception_pending | d_set_exception_pending),
                x_control.exception_code.eq(Mux(d_set_exception_pending, d_set_exception_code, d_control.exception_code))
            ]

        # Register file values
        x_rs1_value_read = Signal(unsigned(32))
        x_rs2_value_read = Signal(unsigned(32))
        m.d.comb += [
            x_rs1_value_read.eq(d_rs1_read_port.data),
            x_rs2_value_read.eq(d_rs2_read_port.data),
        ]

        # Forwarded register file values
        x_rs1_value_forwarded = Signal(unsigned(32))
        x_rs2_value_forwarded = Signal(unsigned(32))
        x_rs1_is_forwarded = Signal()
        x_rs2_is_forwarded = Signal()
        with m.If(x_arbitration.moving):
            m.d.sync += [
                x_rs1_value_forwarded.eq(d_rs1_value_forwarded),
                x_rs2_value_forwarded.eq(d_rs2_value_forwarded),
                x_rs1_is_forwarded.eq(d_rs1_is_forwarded),
                x_rs2_is_forwarded.eq(d_rs2_is_forwarded),
            ]

        # Select the correct register file values
        x_rs1_value = Signal(unsigned(32))
        x_rs2_value = Signal(unsigned(32))
        m.d.comb += [
            x_rs1_value.eq(Mux(x_rs1_is_forwarded, x_rs1_value_forwarded, x_rs1_value_read)),
            x_rs2_value.eq(Mux(x_rs2_is_forwarded, x_rs2_value_forwarded, x_rs2_value_read)),
        ]

        # Load the ALU inputs
        x_alu_left = Signal(unsigned(32))
        x_alu_right = Signal(unsigned(32))

        with m.Switch(x_control.alu_left_select):
            with m.Case(ALULeft.RS1):
                m.d.comb += x_alu_left.eq(x_rs1_value)
            with m.Case(ALULeft.PC):
                m.d.comb += x_alu_left.eq(x_program_counter)
            with m.Case(ALULeft.ZERO):
                m.d.comb += x_alu_left.eq(0)

        with m.Switch(x_control.alu_right_select):
            with m.Case(ALURight.RS2):
                m.d.comb += x_alu_right.eq(x_rs2_value)
            with m.Case(ALURight.IMM):
                m.d.comb += x_alu_right.eq(x_control.immediate)
            with m.Case(ALURight.FOUR):
                m.d.comb += x_alu_right.eq(4)

        # Create a signal for the ALU output
        x_alu_result = Signal(unsigned(32))

        # Do the ALU calculations
        with m.Switch(x_control.alu_operation):
            with m.Case(ALUOperation.ADD_SUB):
                with m.If(x_control.alu_mode_switch):
                    m.d.comb += x_alu_result.eq(x_alu_left - x_alu_right)
                with m.Else():
                    m.d.comb += x_alu_result.eq(x_alu_left + x_alu_right)
            with m.Case(ALUOperation.SHL):
                m.d.comb += x_alu_result.eq(x_alu_left << x_alu_right[0:5])
            with m.Case(ALUOperation.SLT):
                m.d.comb += x_alu_result.eq(x_alu_left.as_signed() < x_alu_right.as_signed())
            with m.Case(ALUOperation.SLTU):
                m.d.comb += x_alu_result.eq(x_alu_left < x_alu_right)
            with m.Case(ALUOperation.XOR):
                m.d.comb += x_alu_result.eq(x_alu_left ^ x_alu_right)
            with m.Case(ALUOperation.SHR):
                with m.If(x_control.alu_mode_switch):
                    m.d.comb += x_alu_result.eq(x_alu_left.as_signed() >> x_alu_right[0:5])
                with m.Else():
                    m.d.comb += x_alu_result.eq(x_alu_left >> x_alu_right[0:5])
            with m.Case(ALUOperation.OR):
                m.d.comb += x_alu_result.eq(x_alu_left | x_alu_right)
            with m.Case(ALUOperation.AND):
                m.d.comb += x_alu_result.eq(x_alu_left & x_alu_right)

        # Do the multiplication calculations
        x_muldiv_intermediate = Signal(unsigned(64))
        x_muldiv_result = Signal(unsigned(32))
        with m.Switch(x_control.alu_operation):
            with m.Case(Funct3Mul.MUL):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[0:32])
                ]
            with m.Case(Funct3Mul.MULH):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value.as_signed() * x_rs2_value.as_signed()),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]
            with m.Case(Funct3Mul.MULHSU):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value.as_signed() * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]
            with m.Case(Funct3Mul.MULHU):
                m.d.comb += [
                    x_muldiv_intermediate.eq(x_rs1_value * x_rs2_value),
                    x_muldiv_result.eq(x_muldiv_intermediate[32:64])
                ]

        # Determine if this is a branch
        x_branch_taken = Signal()
        with m.If(x_control.branch_mode == BranchMode.ALWAYS):
            m.d.comb += x_branch_taken.eq(1)
            # m.d.comb += x_branch_taken.eq(x_control.branch_type == BranchType.REG_REL)
        with m.Elif(x_control.branch_mode == BranchMode.COND_ZERO):
            m.d.comb += x_branch_taken.eq(x_alu_result == 0)
        with m.Elif(x_control.branch_mode == BranchMode.COND_ONE):
            m.d.comb += x_branch_taken.eq(x_alu_result != 0)

        # Determine the target of the branch
        x_branch_target = Signal(unsigned(32))
        with m.Switch(x_control.branch_type):
            with m.Case(BranchType.PC_REL):
                m.d.comb += x_branch_target.eq(x_program_counter + x_control.immediate)
            with m.Case(BranchType.REG_REL):
                m.d.comb += x_branch_target.eq(x_rs1_value + x_control.immediate)
        m.d.comb += x_branch_target[0].eq(0)

        """
        Memory
        """
        # Arbitration
        m_arbitration = Arbitration(name='m_arbitration')
        m_arbitration.elaborate(m, x_arbitration)
        m_set_exception_pending = Signal()
        m_set_exception_code = Signal(unsigned(4))

        m_program_counter = Signal(unsigned(32))
        m_instruction = Signal(unsigned(32))
        m_control = ControlRecord()
        m_alu_result = Signal(unsigned(32))
        m_muldiv_result = Signal(unsigned(32))
        m_rs1_value = Signal(unsigned(32))
        m_rs2_value = Signal(unsigned(32))
        m_branch_taken = Signal()
        m_branch_target = Signal(unsigned(32))
        with m.If(m_arbitration.moving):
            m.d.sync += [
                m_program_counter.eq(x_program_counter),
                m_instruction.eq(x_instruction),
                m_control.eq(x_control),
                m_alu_result.eq(x_alu_result),
                m_muldiv_result.eq(x_muldiv_result),
                m_rs1_value.eq(x_rs1_value),
                m_rs2_value.eq(x_rs2_value),
                m_branch_taken.eq(x_branch_taken),
                m_branch_target.eq(x_branch_target),
            ]

        # Handle the branch if taken
        with m.If(m_arbitration.firing & ~m_control.exception_pending & m_branch_taken):
            with m.If(m_branch_target[1] == 0):
                m.d.comb += [
                    f_arbitration.remove.eq(1),
                    d_arbitration.remove.eq(1),
                    x_arbitration.remove.eq(1),
                ]
                m.d.sync += f_program_counter.eq(m_branch_target)
            with m.Else():
                # Raise instruction misaligned exception
                m.d.comb += [
                    m_set_exception_pending.eq(1),
                    m_set_exception_code.eq(ExceptionCode.INSTRUCTION_ADDRESS_MISALIGNED),
                ]

        # Check alignment
        m_memory_alignment_valid = Signal()
        with m.If((m_control.mem_size == 2) & (m_alu_result[0:2] == 0)):
            m.d.comb += m_memory_alignment_valid.eq(1)
        with m.Elif((m_control.mem_size == 1) & (m_alu_result[0:1] == 0)):
            m.d.comb += m_memory_alignment_valid.eq(1)
        with m.Elif(m_control.mem_size == 0):
            m.d.comb += m_memory_alignment_valid.eq(1)
        with m.Else():
            m.d.comb += m_memory_alignment_valid.eq(0)

        with m.If(m_arbitration.valid & ~m_control.exception_pending & ~m_memory_alignment_valid):
            # Raise invalid memory alignment error
            m.d.comb += m_set_exception_pending.eq(1)
            with m.If(m_control.mem_we):
                m.d.comb += m_set_exception_code.eq(ExceptionCode.STORE_ADDRESS_MISALIGNED)
            with m.Else():
                m.d.comb += m_set_exception_code.eq(ExceptionCode.LOAD_ADDRESS_MISALIGNED)

        # Create memory access request
        m.d.comb += [
            self.data_stream.req_addr.eq(m_alu_result),
            # When this is a write request RS2 contains the write value
            self.data_stream.req_data.eq(m_rs2_value),
            # Set the correct byte select bits
            self.data_stream.req_size.eq(m_control.mem_size),
            # Set the write enable
            self.data_stream.req_we.eq(m_control.mem_we),
            # The request is valid only if the current stage is executing a memory operation
            self.data_stream.req_valid.eq(
                m_arbitration.valid &
                ~m_arbitration.halted_by_next &
                ~m_arbitration.remove &
                ~m_control.exception_pending &
                m_memory_alignment_valid &
                m_control.mem_enable
            ),
            # Set the unsigned flag
            self.data_stream.req_unsigned.eq(m_control.mem_unsigned),
        ]
        # Halt the memory stage if this is a memory request but the bus is not ready
        m.d.comb += m_arbitration.halted_by_self.eq(
            m_arbitration.valid &
            ~m_control.exception_pending &
            m_memory_alignment_valid &
            m_control.mem_enable &
            ~self.data_stream.req_ready
        )

        # CSR signals
        m_csr_result = Signal(unsigned(32))

        # Handle CSR access
        with m.Switch(m_control.immediate[:12]):
            for csr in csr_list:
                with m.Case(csr.number):
                    m.d.comb += m_csr_result.eq(0)
                    for part in csr.parts:
                        m.d.comb += m_csr_result[part.b:part.e].eq(part.value)
            with m.Default():
                m.d.comb += m_csr_result.eq(0xffffffff)

        # Handle CSR operations
        m_csr_immediate = Cat(m_control.rs1, Repl(0, 27))
        m_csr_argument = Mux(m_control.csr_immediate, m_csr_immediate, m_rs1_value)
        m_csr_write_data = Signal(unsigned(32))
        with m.Switch(m_control.csr_mode):
            with m.Case(CSRMode.WRITE):
                m.d.comb += m_csr_write_data.eq(m_csr_argument)
            with m.Case(CSRMode.SET):
                m.d.comb += m_csr_write_data.eq(m_csr_result | m_csr_argument)
            with m.Case(CSRMode.CLEAR):
                m.d.comb += m_csr_write_data.eq(m_csr_result & ~m_csr_argument)

        # Write CSRs
        m_csr_write_enable = m_control.rs1 != 0
        with m.If(m_arbitration.firing & ~m_control.exception_pending & m_csr_write_enable):
            with m.Switch(m_control.immediate[:12]):
                for csr in csr_list:
                    with m.Case(csr.number):
                        for part in csr.parts:
                            if part.writable:
                                m.d.sync += part.value.eq(m_csr_write_data[part.b:part.e])

        """
        Writeback
        """
        # Arbitration
        w_arbitration = Arbitration(name='w_arbitration')
        w_arbitration.elaborate(m, m_arbitration)

        # Get the program counter, instruction, control signals and alu result
        w_program_counter = Signal(unsigned(32))
        w_instruction = Signal(unsigned(32))
        w_control = ControlRecord()
        w_alu_result = Signal(unsigned(32))
        w_muldiv_result = Signal(unsigned(32))
        w_csr_result = Signal(unsigned(32))
        with m.If(w_arbitration.moving):
            m.d.sync += [
                w_program_counter.eq(m_program_counter),
                w_instruction.eq(m_instruction),
                w_control.eq(m_control),
                w_control.exception_pending.eq(m_control.exception_pending | m_set_exception_pending),
                w_control.exception_code.eq(Mux(m_set_exception_pending, m_set_exception_code, m_control.exception_code)),
                w_alu_result.eq(m_alu_result),
                w_muldiv_result.eq(m_muldiv_result),
                w_csr_result.eq(m_csr_result),
            ]

        # Accept memory responses
        accepting_response = w_arbitration.valid & ~w_control.exception_pending & w_control.mem_enable
        m.d.comb += [
            self.data_stream.rsp_ready.eq(accepting_response),
            w_arbitration.halted_by_self.eq(accepting_response & ~self.data_stream.rsp_valid),
        ]

        # Determine the data to write to the register file
        w_write_data = Signal(unsigned(32))
        with m.Switch(w_control.writeback_select):
            with m.Case(WritebackSelect.ALU):
                m.d.comb += w_write_data.eq(w_alu_result)
            with m.Case(WritebackSelect.MEMORY):
                m.d.comb += w_write_data.eq(self.data_stream.rsp_data)
            with m.Case(WritebackSelect.MUL):
                m.d.comb += w_write_data.eq(w_muldiv_result)
            with m.Case(WritebackSelect.CSR):
                m.d.comb += w_write_data.eq(w_csr_result)

        # Create a write port to the register file
        w_write_port = register_file.write_port()
        m.submodules += w_write_port

        # Connect the write port
        m.d.comb += [
            w_write_port.addr.eq(w_control.rd),
            w_write_port.data.eq(w_write_data),
            w_write_port.en.eq(w_arbitration.firing & ~w_control.exception_pending & w_control.register_write),
        ]

        # Handle Interrupt return
        with m.If(w_arbitration.firing & w_control.mret):
            m.d.comb += [
                f_arbitration.remove.eq(1),
                d_arbitration.remove.eq(1),
                x_arbitration.remove.eq(1),
                m_arbitration.remove.eq(1),
            ]
            m.d.sync += [
                f_program_counter.eq(csr_mepc),
                csr_mstatus_mie.eq(csr_mstatus_mpie),
            ]

        # Handler Exception entry
        with m.If(w_arbitration.firing & w_control.exception_pending):
            m.d.comb += [
                f_arbitration.remove.eq(1),
                d_arbitration.remove.eq(1),
                x_arbitration.remove.eq(1),
                m_arbitration.remove.eq(1),
            ]
            m.d.sync += [
                f_program_counter.eq(Cat(C(0, 2), csr_mtvec_base)),
                csr_mcause_code.eq(w_control.exception_code),
                csr_mcause_interrupt.eq(0),
                csr_mepc.eq(w_program_counter),
                csr_mstatus_mpie.eq(csr_mstatus_mie),
                csr_mstatus_mie.eq(0),
            ]

        # Handle External interrupt entry
        w_software_interrupt_pending = csr_mip_msip & csr_mie_msie
        w_timer_interrupt_pending = csr_mip_mtip & csr_mie_mtie
        w_external_interrupt_pending = csr_mip_meip & csr_mie_meie
        w_interrupt_pending = w_software_interrupt_pending | w_timer_interrupt_pending | w_external_interrupt_pending
        with m.If(w_interrupt_pending & csr_mstatus_mie):
            m.d.comb += [
                f_arbitration.remove.eq(1),
                d_arbitration.remove.eq(1),
                x_arbitration.remove.eq(1),
                m_arbitration.remove.eq(1),
            ]
            m.d.sync += [
                f_program_counter.eq(Cat(C(0, 2), csr_mtvec_base)),
                csr_mcause_interrupt.eq(1),
                csr_mstatus_mpie.eq(csr_mstatus_mie),
                csr_mstatus_mie.eq(0),
            ]

            with m.If(w_external_interrupt_pending):
                m.d.sync += csr_mcause_code.eq(11)
            with m.Elif(w_software_interrupt_pending):
                m.d.sync += csr_mcause_code.eq(3)
            with m.Else():
                m.d.sync += csr_mcause_code.eq(7)

            with m.If(m_arbitration.valid):
                m.d.sync += csr_mepc.eq(m_program_counter)
            with m.Elif(x_arbitration.valid):
                m.d.sync += csr_mepc.eq(x_program_counter)
            with m.Elif(d_arbitration.valid):
                m.d.sync += csr_mepc.eq(d_program_counter)
            with m.Else():
                m.d.sync += csr_mepc.eq(f_program_counter)

        """
        Hazard detection and forwarding logic
        """
        def no_forward_condition(control: ControlRecord):
            return (
                    control.register_write &
                    (control.writeback_select != WritebackSelect.ALU) &
                    ((control.rd == d_control.rs1) | (control.rd == d_control.rs2))
            )

        with m.If(
            (x_arbitration.valid & no_forward_condition(x_control)) |
            (m_arbitration.valid & no_forward_condition(m_control))
        ):
            m.d.comb += d_arbitration.halted_by_next.eq(1)
        with m.Else():
            stages = [
                (x_arbitration, x_control, x_alu_result),
                (m_arbitration, m_control, m_alu_result),
                (w_arbitration, w_control, w_write_data),
            ]
            with m.If(d_control.rs1 != 0):
                for (arb, ctl, val) in reversed(stages):
                    with m.If(arb.valid & ctl.register_write & (ctl.rd == d_control.rs1)):
                        m.d.comb += [
                            d_rs1_value_forwarded.eq(val),
                            d_rs1_is_forwarded.eq(1),
                        ]
            with m.If(d_control.rs2 != 0):
                for (arb, ctl, val) in reversed(stages):
                    with m.If(arb.valid & ctl.register_write & (ctl.rd == d_control.rs2)):
                        m.d.comb += [
                            d_rs2_value_forwarded.eq(val),
                            d_rs2_is_forwarded.eq(1),
                        ]

        """
        Control and Status register updates
        """
        m.d.sync += csr_cycles.eq(csr_cycles + 1)
        with m.If(w_arbitration.firing):
            m.d.sync += csr_instructions_retired.eq(csr_instructions_retired + 1)

        return m
