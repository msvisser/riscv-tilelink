from enum import Enum

from amaranth import *

from .isa import Opcode, Funct3Branch, Funct7, Funct3CSR, Funct3CSRPattern, ExceptionCode


class ALUOperation(Enum):
    ADD_SUB = 0
    SHL = 1
    SLT = 2
    SLTU = 3
    XOR = 4
    SHR = 5
    OR = 6
    AND = 7


class ALULeft(Enum):
    RS1 = 0
    PC = 1
    ZERO = 2


class ALURight(Enum):
    RS2 = 0
    IMM = 1
    FOUR = 2


class BranchMode(Enum):
    NEVER = 0
    ALWAYS = 1
    COND_ZERO = 2
    COND_ONE = 3


class BranchType(Enum):
    PC_REL = 0
    REG_REL = 1


class CSRMode(Enum):
    WRITE = 1
    SET = 2
    CLEAR = 3


class WritebackSelect(Enum):
    ALU = 0
    MEMORY = 1
    MUL = 2
    CSR = 3


class ControlRecord(Record):
    def __init__(self):
        super().__init__([
            ('rs1', 5),
            ('rs2', 5),
            ('rd', 5),
            ('immediate', 32),

            ('alu_operation', ALUOperation),
            ('alu_mode_switch', 1),
            ('alu_left_select', ALULeft),
            ('alu_right_select', ALURight),

            ('branch_mode', BranchMode),
            ('branch_type', BranchType),

            ('mem_enable', 1),
            ('mem_we', 1),
            ('mem_size', 2),
            ('mem_unsigned', 1),

            ('csr_mode', CSRMode),
            ('csr_immediate', 1),

            ('register_write', 1),
            ('writeback_select', WritebackSelect),

            ('exception_pending', 1),
            ('exception_code', ExceptionCode),
            ('mret', 1),
        ], src_loc_at=1)


class Decoder(Elaboratable):
    def __init__(self):
        self.instruction = Signal(unsigned(32))
        self.control = ControlRecord()

    def elaborate(self, platform):
        m = Module()

        ctl = self.control
        ins = self.instruction

        m.d.comb += [
            ctl.rs1.eq(ins[15:20]),
            ctl.rs2.eq(ins[20:25]),
            ctl.rd.eq(ins[7:12]),
        ]

        opcode = ins[0:7]
        funct3 = ins[12:15]
        funct7 = ins[25:32]
        imm_i = Cat(ins[20:32], Repl(ins[31], 20))
        imm_s = Cat(ins[7:12], ins[25:32], Repl(ins[31], 20))
        imm_b = Cat(C(0), ins[8:12], ins[25:31], ins[7], Repl(ins[31], 20))
        imm_u = Cat(C(0, unsigned(12)), ins[12:32])
        imm_j = Cat(C(0), ins[21:31], ins[20], ins[12:20], Repl(ins[31], 12))

        dest_not_zero = (ctl.rd != 0)

        m.d.comb += [
            ctl.alu_operation.eq(ALUOperation.ADD_SUB),
            ctl.alu_mode_switch.eq(0),
            ctl.register_write.eq(dest_not_zero),
            ctl.writeback_select.eq(WritebackSelect.ALU),
            ctl.branch_mode.eq(BranchMode.NEVER),
            ctl.branch_type.eq(BranchType.PC_REL),
            ctl.mem_enable.eq(0),
            ctl.mem_we.eq(0),
            ctl.mem_size.eq(0),
            ctl.mem_unsigned.eq(0),
            ctl.csr_mode.eq(0),
            ctl.csr_immediate.eq(0),
            ctl.exception_pending.eq(0),
            ctl.exception_code.eq(0),
            ctl.mret.eq(0),
        ]

        with m.Switch(opcode):
            with m.Case(Opcode.LUI):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.ZERO),
                    ctl.alu_right_select.eq(ALURight.IMM),
                    ctl.immediate.eq(imm_u),
                ]
            with m.Case(Opcode.AUIPC):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.PC),
                    ctl.alu_right_select.eq(ALURight.IMM),
                    ctl.immediate.eq(imm_u),
                ]
            with m.Case(Opcode.JAL):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.PC),
                    ctl.alu_right_select.eq(ALURight.FOUR),
                    ctl.immediate.eq(imm_j),
                    ctl.branch_mode.eq(BranchMode.ALWAYS),
                    ctl.branch_type.eq(BranchType.PC_REL),
                ]
            with m.Case(Opcode.JALR):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.PC),
                    ctl.alu_right_select.eq(ALURight.FOUR),
                    ctl.immediate.eq(imm_i),
                    ctl.branch_mode.eq(BranchMode.ALWAYS),
                    ctl.branch_type.eq(BranchType.REG_REL),
                ]
            with m.Case(Opcode.BRANCH):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.RS1),
                    ctl.alu_right_select.eq(ALURight.RS2),
                    ctl.immediate.eq(imm_b),
                    ctl.register_write.eq(0),
                    ctl.branch_type.eq(BranchType.PC_REL),
                ]
                with m.Switch(funct3):
                    with m.Case(Funct3Branch.BEQ, Funct3Branch.BNE):
                        m.d.comb += [
                            ctl.alu_operation.eq(ALUOperation.ADD_SUB),
                            ctl.alu_mode_switch.eq(1),
                        ]
                    with m.Case(Funct3Branch.BLT, Funct3Branch.BGE):
                        m.d.comb += [
                            ctl.alu_operation.eq(ALUOperation.SLT),
                            ctl.alu_mode_switch.eq(0),
                        ]
                    with m.Case(Funct3Branch.BLTU, Funct3Branch.BGEU):
                        m.d.comb += [
                            ctl.alu_operation.eq(ALUOperation.SLTU),
                            ctl.alu_mode_switch.eq(0),
                        ]
                with m.Switch(funct3):
                    with m.Case(Funct3Branch.BNE, Funct3Branch.BLT, Funct3Branch.BLTU):
                        m.d.comb += ctl.branch_mode.eq(BranchMode.COND_ONE)
                    with m.Case(Funct3Branch.BEQ, Funct3Branch.BGE, Funct3Branch.BGEU):
                        m.d.comb += ctl.branch_mode.eq(BranchMode.COND_ZERO)
            with m.Case(Opcode.LOAD):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.RS1),
                    ctl.alu_right_select.eq(ALURight.IMM),
                    ctl.immediate.eq(imm_i),
                    ctl.writeback_select.eq(WritebackSelect.MEMORY),
                    ctl.mem_enable.eq(1),
                    ctl.mem_we.eq(0),
                    ctl.mem_size.eq(funct3[0:2]),
                    ctl.mem_unsigned.eq(funct3[2]),
                ]
            with m.Case(Opcode.STORE):
                m.d.comb += [
                    ctl.alu_left_select.eq(ALULeft.RS1),
                    ctl.alu_right_select.eq(ALURight.IMM),
                    ctl.immediate.eq(imm_s),
                    ctl.register_write.eq(0),
                    ctl.mem_enable.eq(1),
                    ctl.mem_we.eq(1),
                    ctl.mem_size.eq(funct3[0:2]),
                ]
            with m.Case(Opcode.OP_32):
                m.d.comb += [
                    ctl.alu_operation.eq(funct3),
                    ctl.alu_mode_switch.eq(funct7 == Funct7.SUB),
                    ctl.alu_left_select.eq(ALULeft.RS1),
                    ctl.alu_right_select.eq(ALURight.RS2),
                    # Immediate not needed here
                    ctl.immediate.eq(imm_i),
                ]
                with m.If(funct7 == Funct7.MULDIV):
                    m.d.comb += ctl.writeback_select.eq(WritebackSelect.MUL)
            with m.Case(Opcode.OP_IMM_32):
                m.d.comb += [
                    ctl.alu_operation.eq(funct3),
                    ctl.alu_left_select.eq(ALULeft.RS1),
                    ctl.alu_right_select.eq(ALURight.IMM),
                    ctl.immediate.eq(imm_i),
                ]
            with m.Case(Opcode.MISC_MEM):
                # Illegal Instruction
                m.d.comb += [
                    ctl.exception_pending.eq(1),
                    ctl.exception_code.eq(ExceptionCode.ILLEGAL_INSTRUCTION),
                ]
            with m.Case(Opcode.SYSTEM):
                with m.If(funct3 == Funct3CSR.PRIV):
                    m.d.comb += [
                        ctl.immediate.eq(imm_i),
                    ]
                    with m.If(ins[7:32] == 0b0000_0000_0000_0000_0000_0000_0):
                        m.d.comb += [
                            ctl.exception_pending.eq(1),
                            ctl.exception_code.eq(ExceptionCode.ENVIRONMENT_CALL_M),
                        ]
                    with m.Elif(ins[7:32] == 0b0000_0000_0000_0000_0000_0000_1):
                        m.d.comb += [
                            ctl.exception_pending.eq(1),
                            ctl.exception_code.eq(ExceptionCode.BREAKPOINT),
                        ]
                    with m.Elif(ins[7:32] == 0b0011_0000_0010_0000_0000_0000_0):
                        m.d.comb += ctl.mret.eq(1)
                    with m.Else():
                        # Illegal Instruction
                        m.d.comb += [
                            ctl.exception_pending.eq(1),
                            ctl.exception_code.eq(ExceptionCode.ILLEGAL_INSTRUCTION),
                        ]
                with m.Else():
                    with m.If(funct3 == Funct3CSR.ILLEGAL):
                        # Illegal Instruction
                        m.d.comb += [
                            ctl.exception_pending.eq(1),
                            ctl.exception_code.eq(ExceptionCode.ILLEGAL_INSTRUCTION),
                        ]

                    with m.If((ctl.rs1 != 0) & (ins[30:31] == 0b11)):
                        # Writing un-writable CSR -> Illegal Instruction
                        m.d.comb += [
                            ctl.exception_pending.eq(1),
                            ctl.exception_code.eq(ExceptionCode.ILLEGAL_INSTRUCTION),
                        ]

                    m.d.comb += [
                        ctl.immediate.eq(imm_i),
                        ctl.writeback_select.eq(WritebackSelect.CSR),
                    ]

                    # Determine the CSR mode
                    with m.Switch(funct3):
                        with m.Case(Funct3CSRPattern.PATTERN_RW):
                            m.d.comb += ctl.csr_mode.eq(CSRMode.WRITE)
                        with m.Case(Funct3CSRPattern.PATTERN_RS):
                            m.d.comb += ctl.csr_mode.eq(CSRMode.SET)
                        with m.Case(Funct3CSRPattern.PATTERN_RC):
                            m.d.comb += ctl.csr_mode.eq(CSRMode.CLEAR)

                    # Determine the CSR immediate mode
                    m.d.comb += ctl.csr_immediate.eq(funct3.matches(Funct3CSRPattern.PATTERN_IMM))
            with m.Default():
                # Illegal Instruction
                m.d.comb += [
                    ctl.exception_pending.eq(1),
                    ctl.exception_code.eq(ExceptionCode.ILLEGAL_INSTRUCTION),
                ]

        return m
