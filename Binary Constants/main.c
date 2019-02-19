#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    const uint8_t value1 = 0b00110000;
    const uint16_t value2 = 0b0111011100110000;
    const uint32_t value3 = 0b01010101010101010101010101010101;
    const uint64_t value4 = 0b1010101010101010101010101010101001010101010101010101010101010101;

    printf("value1 = 0x%02X\n", value1);
    printf("value2 = 0x%04X\n", value2);
    printf("value3 = 0x%08X\n", value3);
    printf("value4 = 0x%016I64X\n", value4);

    return EXIT_SUCCESS;
}
