#include <stdlib.h>
#include <stdio.h>

struct a
{
};

struct b
{
    struct c
    {
    };
};

struct d
{
    struct e
    {
        struct f
        {
        };
    };
};

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    printf("sizeof a: %u\n", (unsigned int)sizeof(struct a));
    printf("sizeof b: %u\n", (unsigned int)sizeof(struct b));
    printf("sizeof d: %u\n", (unsigned int)sizeof(struct d));

    return EXIT_SUCCESS;
}
