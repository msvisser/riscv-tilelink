FIRMWARE_NAME=main

TOOL_PREFIX=riscv64-elf

M_ARCH=rv32im
M_ABI=ilp32

LIB_GCC=/usr/lib/gcc/riscv64-elf/11.1.0/$(M_ARCH)/$(M_ABI)/libgcc.a

AS_FLAGS=-march=$(M_ARCH) -mabi=$(M_ABI)
GCC_FLAGS=-march=$(M_ARCH) -mabi=$(M_ABI) -mstrict-align -mno-div -O2 -Wall -Wextra -fno-builtin -ffunction-sections -fdata-sections
LD_FLAGS=-A=$(M_ARCH) -melf32lriscv --gc-sections

.PRECIOUS: %.o %.elf %.bin

# Build firmware
%.o: %.s
	$(TOOL_PREFIX)-as $(AS_FLAGS) $< -o $@

%.o: %.c
	$(TOOL_PREFIX)-gcc $(GCC_FLAGS) -c $< -o $@

%.elf: linker.ld loader.o csr.o %.o $(LIB_GCC)
	$(TOOL_PREFIX)-ld $(LD_FLAGS) -T $^ -o $@

# Convinience targets
.PHONY: all clean
all: $(FIRMWARE_NAME).elf
clean:
	rm -f *.o *.elf *.bin *.bin.txt
