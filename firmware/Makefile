.PHONY: all test/main.elf csr/main.elf
all: test.bin csr.bin

test/main.elf:
	make -C test

csr/main.elf:
	make -C csr

%.bin: %/main.elf
	riscv64-elf-objcopy -O binary $< $@
