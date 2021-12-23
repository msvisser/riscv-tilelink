CXXFLAGS=-O3 -std=c++17 -I `yosys-config --datdir`/include

simulation: simulation.cpp tilelink_soc.o
	g++ ${CXXFLAGS} $^ -o $@ -lfmt

tilelink_soc.o: tilelink_soc.cpp
	g++ ${CXXFLAGS} -c $^ -o $@

tilelink_soc.cpp: tilelink_soc.il
	yosys -p 'delete w:$$verilog_initial_trigger; write_cxxrtl -header $@' $^

tilelink_soc.il: ../tilelink_soc.py
	cd .. && python tilelink_soc.py generate simulation/$@

.PHONY: clean
clean:
	rm -f tilelink_soc.v tilelink_soc.cpp tilelink_soc.h tilelink_soc.o simulation
