#include <stdlib.h>
#include <stdio.h>

static void print_complex(_Complex double value)
{
    printf("%f.%f\n", __real__ value, __imag__ value);
}

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    _Complex double a = 1.0 + 1.0j;

    print_complex(a);

    return EXIT_SUCCESS;
}
