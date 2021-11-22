.section .text.csr
.align 2

.global read_cycles
read_cycles:
    csrr    t0, cycleh
    csrr    a0, cycle
    csrr    a1, cycleh
    bne     t0, a1, read_cycles
    ret

.global read_instret
read_instret:
    csrr    t0, instreth
    csrr    a0, instret
    csrr    a1, instreth
    bne     t0, a1, read_instret
    ret

.global rw_mscratch
rw_mscratch:
    csrrw   a0, mscratch, a0
    ret

.global rs_mscratch
rs_mscratch:
    csrrs   a0, mscratch, a0
    ret

.global rc_mscratch
rc_mscratch:
    csrrc   a0, mscratch, a0
    ret

.global test_mscratch
test_mscratch:
    li      t0, 0x12345678
    li      t1, 0x000000ff
    li      t2, 0xff000000

    csrw    mscratch, t0
    csrs    mscratch, t1
    csrc    mscratch, t2

    csrwi   mscratch, 0x1f
    csrci   mscratch, 0x0f
    csrsi   mscratch, 0x05

    ret

.global setup_mtvec
setup_mtvec:
    la      t0, exception_handler
    csrw    mtvec, t0
    csrsi   mstatus, 0x8
    li      t0, 0x888
    csrs    mie, t0
    ret

.global call_ebreak
call_ebreak:
    ebreak
    ret

.global exception_handler
exception_handler:
    addi    sp, sp, -4
    sw      t0, 0(sp)

    csrr    t0, mcause
    bgez    t0, .Lexception
.Linterrupt:
    li      t0, 0x80000000
    sw      zero, 16(t0)

    lw      t0, 0(sp)
    addi    sp, sp, 4
    mret

.Lexception:
    li      t0, 0x80000000
    li      t1, 1
    sw      t1, 4(t0)
    j       .Lexception
