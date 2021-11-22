from enum import Enum

class Opcode(Enum):
    LUI       = 0b0110111
    AUIPC     = 0b0010111
    JAL       = 0b1101111
    JALR      = 0b1100111
    BRANCH    = 0b1100011
    LOAD      = 0b0000011
    STORE     = 0b0100011
    OP_IMM_32 = 0b0010011
    OP_32     = 0b0110011
    MISC_MEM  = 0b0001111
    SYSTEM    = 0b1110011


class Funct3(Enum):
    BEQ = B = ADD = FENCE = PRIV = MUL = 0b000
    BNE = H = SLL = FENCEI = CSRRW = MULH = 0b001
    W = SLT = CSRRS = MULHSU = 0b010
    SLTU = CSRRC = MULHU = 0b011
    BLT = BU = XOR = DIV = 0b100
    BGE = HU = SR = CSRRWI = DIVU = 0b101
    BLTU = OR = CSRRSI = REM = 0b110
    BGEU = AND = CSRRCI = REMU = 0b111


class Funct3Branch(Enum):
    BEQ  = 0b000
    BNE  = 0b001
    BLT  = 0b100
    BGE  = 0b101
    BLTU = 0b110
    BGEU = 0b111


class Funct3Memory(Enum):
    BYTE = 0b000
    HALF = 0b001
    WORD = 0b010
    BYTE_UNSIGNED = 0b100
    HALF_UNSIGNED = 0b101


class Funct3Arithmetic(Enum):
    ADD  = 0b000
    SHL  = 0b001
    SLT  = 0b010
    SLTU = 0b011
    XOR  = 0b100
    SHR  = 0b101
    OR   = 0b110
    AND  = 0b111


class Funct3Fence(Enum):
    FENCE  = 0b000
    FENCEI = 0b001


class Funct3CSR(Enum):
    PRIV   = 0b000
    CSRRW  = 0b001
    CSRRS  = 0b010
    CSRRC  = 0b011
    ILLEGAL = 0b100
    CSRRWI = 0b101
    CSRRSI = 0b110
    CSRRCI = 0b111


class Funct3CSRPattern:
    PATTERN_RW = "-01"
    PATTERN_RS = "-10"
    PATTERN_RC = "-11"
    PATTERN_REG = "0--"
    PATTERN_IMM = "1--"


class Funct3Mul(Enum):
    MUL    = 0b000
    MULH   = 0b001
    MULHSU = 0b010
    MULHU  = 0b011
    DIV    = 0b100
    DIVU   = 0b101
    REM    = 0b110
    REMU   = 0b111


class Funct7(Enum):
    SRL = ADD = 0b0000000
    MULDIV    = 0b0000001
    SRA = SUB = 0b0100000


class Funct12(Enum):
    ECALL  = 0b000000000000
    EBREAK = 0b000000000001
    MRET   = 0b001100000010
    WFI    = 0b000100000101


class ExceptionCode(Enum):
    INSTRUCTION_ADDRESS_MISALIGNED = 0
    INSTRUCTION_ACCESS_FAULT = 1
    ILLEGAL_INSTRUCTION = 2
    BREAKPOINT = 3
    LOAD_ADDRESS_MISALIGNED = 4
    LOAD_ACCESS_FAULT = 5
    STORE_ADDRESS_MISALIGNED = 6
    STORE_ACCESS_FAULT = 7
    ENVIRONMENT_CALL_M = 11
