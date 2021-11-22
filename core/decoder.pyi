from enum import Enum

from nmigen import Record, Signal, Elaboratable


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
        self.rs1: Signal = ...
        self.rs2: Signal = ...
        self.rd: Signal = ...
        self.immediate: Signal = ...

        self.alu_operation: Signal = ...
        self.alu_mode_switch: Signal = ...
        self.alu_left_select: Signal = ...
        self.alu_right_select: Signal = ...

        self.branch_mode: Signal = ...
        self.branch_type: Signal = ...

        self.mem_enable: Signal = ...
        self.mem_we: Signal = ...
        self.mem_size: Signal = ...
        self.mem_unsigned: Signal = ...

        self.csr_mode: Signal = ...
        self.csr_immediate: Signal = ...

        self.register_write: Signal = ...
        self.writeback_select: Signal = ...

        self.exception_pending: Signal = ...
        self.exception_code: Signal = ...
        self.mret: Signal = ...


class Decoder(Elaboratable):
    def __init__(self):
        self.instruction: Signal = ...
        self.control: ControlRecord = ...
