typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int usize_t;
typedef unsigned long long uint64_t;
typedef int int32_t;
typedef int size_t;

volatile uint32_t test = 0;
volatile uint8_t test2_u8 = 0x41;
volatile uint32_t test_mul1 = 123;
volatile uint32_t test_mul2 = 456;

volatile uint32_t * const io_out = (volatile uint32_t *)0x80000000;
volatile uint32_t * const io_halt_simulator = (volatile uint32_t *)0x80000004;
volatile uint32_t * const io_time_low = (volatile uint32_t *)0x80000008;
volatile uint32_t * const io_time_high = (volatile uint32_t *)0x8000000c;

uint64_t read_time() {
    uint32_t time_low;
    uint32_t time_high;
    uint32_t time_high_again;
    do {
        time_high = *io_time_high;
        time_low = *io_time_low;
        time_high_again = *io_time_high;
    } while (time_high != time_high_again);

    return ((uint64_t) time_low) | (((uint64_t) time_high_again) << 32);
}

static uint16_t crc[] = { (uint16_t)0xbe52,
                                     (uint16_t)0x1199,
                                     (uint16_t)0x5608,
                                     (uint16_t)0x1fd7,
                                     (uint16_t)0x0747 };

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

int main() {
    for (int i = 0; i < 10; i++) {
        *io_out = test2_u8;
    }
    *io_out = 0x0a;

    test = 0x12345678;
    volatile unsigned char *test_u8 = (volatile unsigned char *) &test;

    *test_u8 = 0xff;

    for (int i = 0; i < 5; i++) {
        uint16_t c = crc[i];
        hex_print(c);
        *io_out = '\n';
    }

    *test_u8 = 0xab;

    uint32_t mul_result = test_mul1 * test_mul2;
    mul_result |= 0x10000000;
    hex_print(mul_result);
    *io_out = '\n';

    return 0;
}
