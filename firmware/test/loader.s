.section .text.start
.align 2

.global _start
_start:
    /* Set up stack pointer and global pointer */
.option push
.option norelax
    la      gp, __global_pointer$
.option pop
    la      sp, __stack_va

    /* Copy data sections from ROM into RAM */
    la      t0, __data_start
    la      t1, __data_end
    la      t2, __data_va
    bgeu    t0, t1, .L_copy_data_loop_end
.L_copy_data_loop:
    lw      t3, 0(t0)
    addi    t0, t0, 4
    addi    t2, t2, 4
    sw      t3, -4(t2)
    bltu    t0, t1, .L_copy_data_loop
.L_copy_data_loop_end:

    /* Clear bss sections */
    la      t0, __bss_start
    la      t1, __bss_end
    bgeu    t0, t1, .L_clear_bss_loop_end
.L_clear_bss_loop:
    sw      zero, 0(t0)
    addi    t0, t0, 4
    bltu    t0, t1, .L_clear_bss_loop
.L_clear_bss_loop_end:

    /* Run the main function */
    jal     main

.L_halt_simulator:
    /* Tell the simulator to halt the processor */
    la      t0, 0x80000000
    li      t1, 1
    sw      t1, 4(t0)
.L_end_loop:
    j       .L_end_loop
