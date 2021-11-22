typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int usize_t;
typedef unsigned long long uint64_t;
typedef int int32_t;
typedef int size_t;

volatile uint32_t * const io_out = (volatile uint32_t *)0x80000000;
volatile uint32_t * const io_halt_simulator = (volatile uint32_t *)0x80000004;
volatile uint32_t * const io_time_low = (volatile uint32_t *)0x80000008;
volatile uint32_t * const io_time_high = (volatile uint32_t *)0x8000000c;
volatile uint32_t * const io_interrupt = (volatile uint32_t *)0x80000010;

static uint8_t hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

static void hex_print(uint32_t x) {
    *io_out = hex[(x >> 28) & 0xf];
    *io_out = hex[(x >> 24) & 0xf];
    *io_out = hex[(x >> 20) & 0xf];
    *io_out = hex[(x >> 16) & 0xf];
    *io_out = hex[(x >> 12) & 0xf];
    *io_out = hex[(x >> 8) & 0xf];
    *io_out = hex[(x >> 4) & 0xf];
    *io_out = hex[x & 0xf];
}

static void str_print(char *str) {
    char c;
    while ((c = *str++) != '\0') {
        *io_out = c;
    }
}

extern uint64_t read_cycles();
extern uint64_t read_instret();

extern uint32_t rw_mscratch(uint32_t);
extern uint32_t rs_mscratch(uint32_t);
extern uint32_t rc_mscratch(uint32_t);
extern void test_mscratch();

extern void setup_mtvec();
extern void call_ebreak();

int main() {
    setup_mtvec();
    hex_print(0xabcdef01);
    *io_out = '\n';

    {
        uint64_t instret = read_instret();
        uint64_t cycles = read_cycles();

        str_print("cycles: ");
        hex_print(cycles >> 32);
        hex_print(cycles & 0xffffffff);
        *io_out = '\n';
        str_print("instret: ");
        hex_print(instret >> 32);
        hex_print(instret & 0xffffffff);
        *io_out = '\n';
    }

    uint32_t x1 = rw_mscratch(0x12345678);
    uint32_t x2 = rs_mscratch(0xff);
    uint32_t x3 = rc_mscratch(0xff000000);
    uint32_t x4 = rs_mscratch(0);

    hex_print(x1);
    *io_out = '\n';
    hex_print(x2);
    *io_out = '\n';
    hex_print(x3);
    *io_out = '\n';
    hex_print(x4);
    *io_out = '\n';

    test_mscratch();

    {
        uint64_t instret = read_instret();
        uint64_t cycles = read_cycles();

        str_print("cycles: ");
        hex_print(cycles >> 32);
        hex_print(cycles & 0xffffffff);
        *io_out = '\n';
        str_print("instret: ");
        hex_print(instret >> 32);
        hex_print(instret & 0xffffffff);
        *io_out = '\n';
    }

    *io_interrupt = 1;
    hex_print(0xdeadbeef);
    *io_out = '\n';

    call_ebreak();

    return 0;
}
