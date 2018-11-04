#include <stdlib.h>
#include <stdio.h>

static void print_argv(int argc; char *argv[argc], int argc);

int main(int argc, char *argv[])
{
    print_argv(argv, argc);
    return EXIT_SUCCESS;
}

static void print_argv(int argc; char *argv[argc], int argc)
{
    int i = 0;

    while (i < argc)
    {
        printf("argv[%i] = %s\n", i, argv[i]);
        ++i;
    }
}
