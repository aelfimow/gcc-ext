#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    static const void *table[] =
    {
        &&zero,
        &&one,
        &&two,
        &&three,
        &&four
    };

    const void *ptr = NULL;

    argv = argv;

    if (argc >= 5)
    {
        return EXIT_FAILURE;
    }

    ptr = table[argc];

    goto *ptr;

zero:
    printf("zero\n");

one:
    printf("one\n");

two:
    printf("two\n");

three:
    printf("three\n");

four:
    printf("four\n");

    return EXIT_SUCCESS;
}
