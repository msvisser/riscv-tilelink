.PHONY: all test/main.elf csr/main.elf coremark/coremark-perf.bin coremark/coremark-val.bin
all: test.bin csr.bin coremark-perf.bin coremark-val.bin

test/main.elf:
	make -C test

csr/main.elf:
	make -C csr

coremark/coremark-perf.bin:
	make -C coremark clean link PORT_DIR=barebones XCFLAGS=-DPERFORMANCE_RUN=1 ITERATIONS=10
	cp coremark/coremark.bin coremark/coremark-perf.bin

coremark/coremark-val.bin:
	make -C coremark clean link PORT_DIR=barebones XCFLAGS=-DVALIDATION_RUN=1 ITERATIONS=10
	cp coremark/coremark.bin coremark/coremark-val.bin


test.bin: test/main.elf
	riscv64-elf-objcopy -O binary $< $@

csr.bin: csr/main.elf
	riscv64-elf-objcopy -O binary $< $@

coremark-perf.bin: coremark/coremark-perf.bin
	riscv64-elf-objcopy -O binary $< $@

coremark-val.bin: coremark/coremark-val.bin
	riscv64-elf-objcopy -O binary $< $@
