#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

static void out(const void *p, size_t size)
{
    const uint8_t *p_data = p;

    for (size_t i = 0; i < size; ++i)
    {
        printf("%02X", *p_data);
        ++p_data;
    }

    printf("\n");
}

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    const int size_of_int128 = sizeof(__int128);

    printf("size of __int128: %d\n", size_of_int128);

    uint8_t buffer[sizeof(__int128)];
    memset(buffer, 0, sizeof(buffer));

    __int128 value = 1;

    for (int i = 0; i < (8 * size_of_int128); ++i)
    {
        value <<= 1;

        memcpy(buffer, &value, sizeof(buffer));
        out(buffer, sizeof(buffer));
    }

    return EXIT_SUCCESS;
}
