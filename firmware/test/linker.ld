OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
    ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 32K
    RAM (rwx) : ORIGIN = 0x00008000, LENGTH = 32K
}

__text_va = ORIGIN(ROM);
__data_va = ORIGIN(RAM);
__stack_va = ORIGIN(RAM) + LENGTH(RAM);

SECTIONS
{
    .text __text_va : {
        *(.text*)
    } >ROM

    . = ALIGN(4);
    .rodata : {
        *(.rodata*)
        *(.srodata*)
    } >ROM

    . = ALIGN(4);
    __data_start = .;
    .data __data_va : AT(__data_start) {
        *(.data*)
        . = ALIGN(4);
        __global_pointer$ = . + 0x800;
        *(.sdata*)
    } >RAM
    __data_end = __data_start + SIZEOF(.data);

    . = ALIGN(4);
    __bss_start = .;
    .sbss (NOLOAD): {
        *(.sbss*)
        *(.scommon*)
    } >RAM

    .bss (NOLOAD): {
        *(.bss*)
        *(COMMON)
    } >RAM
    __bss_end = .;

    /DISCARD/ :
    {
        *(.eh_frame)
    }
}

