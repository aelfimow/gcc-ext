#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <quadmath.h>

static __float128 result128(void);

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    const size_t size_of_float128 = sizeof(__float128);
    const size_t size_of_float80 = sizeof(__float80);

    printf("Size of __float128: %I64u\n", size_of_float128);
    printf("Size of __float80: %I64u\n", size_of_float80);

    char buffer[1024];
    memset(buffer, 0, sizeof(buffer));

    quadmath_snprintf(buffer, sizeof(buffer), "%.36Qe", result128());

    printf("%s\n", buffer);

    return EXIT_SUCCESS;
}

static __float128 result128(void)
{
    const __float128 a = 1.0Q;
    const __float128 b = 2.0Q;

    const __float128 sum = a + b;

    const __float128 result = sqrtq(sum);

    return result;
}
