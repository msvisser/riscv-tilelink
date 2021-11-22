CXXFLAGS=-O3 -std=c++17 -I `yosys-config --datdir`/include

simulation: simulation.cpp tilelink_soc.o
	g++ ${CXXFLAGS} $^ -o $@ -lfmt

tilelink_soc.o: tilelink_soc.cpp
	g++ ${CXXFLAGS} -c $^ -o $@

tilelink_soc.cpp: tilelink_soc.v sim_dmem.v
	yosys -p 'write_cxxrtl -g3 -header $@' $^

tilelink_soc.v: ../tilelink_soc.py
	cd .. && python tilelink_soc.py generate simulation/$@

.PHONY: clean
clean:
	rm -f tilelink_soc.v tilelink_soc.cpp tilelink_soc.h tilelink_soc.o simulation
