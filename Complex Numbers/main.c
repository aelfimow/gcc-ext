#include <stdlib.h>
#include <stdio.h>

static void print_complex(_Complex double value)
{
    printf("%f + j%f\n", __real__ value, __imag__ value);
}

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    _Complex double a = 1.0 + 1.0j;
    _Complex double b = 10.0 + 11.0j;
    _Complex double sum = a + b;

    print_complex(a);
    print_complex(b);
    print_complex(sum);

    return EXIT_SUCCESS;
}
