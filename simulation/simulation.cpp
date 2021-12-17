#include <fstream>
#include <chrono>
#include <random>
#include <backends/cxxrtl/cxxrtl_vcd.h>
#include <argparse/argparse.hpp>
#include <fmt/core.h>
#include "tilelink_soc.h"

// Simulation model
static cxxrtl_design::p_top top;

// Simulation parameters
static bool vcd_enabled = false;

// VCD writer
static cxxrtl::vcd_writer vcd;
static std::ofstream waves;
static size_t steps = 0;

// Flip the clock high and low
void clk() {
    top.p_clk.set<bool>(true);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;
    }

    top.p_clk.set<bool>(false);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;
    }
}

int main(int argc, char *argv[]) {
    argparse::ArgumentParser program(argv[0]);

    program.add_argument("firmware")
        .help("simulation firmware for RISC-V processor");

    program.add_argument("--vcd")
        .help("enable VCD dumping during simulation")
        .default_value(false)
        .implicit_value(true);

    program.add_argument("-m", "--max-cycles")
        .help("maximum number of clock cycles to simulate")
        .scan<'u', size_t>()
        .default_value(std::numeric_limits<size_t>::max());

    try {
        program.parse_args(argc, argv);
    } catch (const std::runtime_error& err) {
        std::cout << err.what() << std::endl;
        std::cout << program;
        exit(0);
    }

    vcd_enabled = program.get<bool>("--vcd");

    // Initialize the top module
    top = cxxrtl_design::p_top();

    if (vcd_enabled) {
        // debug_items maps the hierarchical names of signals and memories in the design
        // to a cxxrtl_object (a value, a wire, or a memory)
        cxxrtl::debug_items all_debug_items;

        // Load the debug items of the top down the whole design hierarchy
        top.debug_info(all_debug_items, "top ");

        // vcd_writer is the CXXRTL object that's responsible of creating a string with
        // the VCD file contents.
        vcd.timescale(1, "ns");

        // Here we tell the vcd writer to dump all the signals of the design, except for the
        // memories, to the VCD file.
        //
        // It's not necessary to load all debug objects to the VCD. There is, for example,
        // a  vcd.add(<debug items>, <filter>)) method which allows creating your custom filter to decide
        // what to add and what not.
        vcd.add_without_memories(all_debug_items);
        // vcd.add(all_debug_items);

        waves = std::ofstream("waves.vcd");
    }

    // Open the firmware input file
    auto firmware_path = program.get<std::string>("firmware");
    // TODO: Can open ifstream of directory, which does not error
    std::ifstream input(firmware_path, std::ios::binary | std::ios::in);
    if (!input.is_open()) {
        fmt::print(stderr, "Unable to open firmware file '{}'\n", firmware_path);
        return 1;
    }

    // Read the complete instruction memory from the file
    size_t i;
    for (i = 0; i < top.memory_p_tl__rom_2e_memory.depth; i++) {
        uint32_t data = 0;
        size_t j = 0;
        while (j < 4) {
            uint8_t byte = input.get();
            if (input.eof()) break;
            data |= byte << (j * 8);
            j++;
        }
        if (input.eof() && j == 0) break;
        top.memory_p_tl__rom_2e_memory[i].set<uint32_t>(data);
    }
    fmt::print(stderr, "Loaded {} words from firmware file '{}'\n", i, firmware_path);

    // Get the simulation starting time
    auto start_time = std::chrono::steady_clock::now();

    // Initialize the clock
    top.p_clk.set<bool>(false);
    top.step();
    if (vcd_enabled) {
        vcd.sample(0);
    }

    size_t clk_cycle = 0;
    size_t max_cycles = program.get<size_t>("--max-cycles");
    while (clk_cycle < max_cycles) {
        clk();

        // If the debug output port is valid, print an output character
        if (top.p_sim__output__valid.get<bool>()) {
            char c = top.p_sim__output.get<unsigned char>();
            fmt::print("{}", c);
        }

        // Stop the simulation if halt_simulator is asserted
        if (top.p_halt__simulator.get<bool>()) {
            fmt::print(stderr, "Stopping simulator after {} cycles\n", clk_cycle);
            break;
        }

        if (vcd_enabled && clk_cycle % 100000 == 0) {
            waves << vcd.buffer;
            vcd.buffer.clear();
        }

	    clk_cycle++;
    }

    top.p_clk.set<bool>(false);
    top.step();

    if (vcd_enabled) {
        vcd.sample(steps);
        steps += 5;

        waves << vcd.buffer;
        vcd.buffer.clear();
    }

    auto finish_time = std::chrono::steady_clock::now();

    std::chrono::duration<double> diff = finish_time - start_time;
    fmt::print(stderr, "Simulation runtime: {:.3f}s\n", diff.count());

    if (clk_cycle == max_cycles) {
        fmt::print("\n");
        fmt::print(stderr, "Maximum number of clock cycles reached\n");
        return 1;
    }

    return 0;
}
