#include <stdlib.h>
#include <stdio.h>

#ifndef __GNUC__
#error GNU C is not active.
#endif

int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    {
        __label__ a;
        __label__ b;
        __label__ c;

        goto a;
a:
        printf("Block 1: a\n");
        goto b;
b:
        printf("Block 1: b\n");
        goto c;
c:
        printf("Block 1: c\n");
    }

    {
        __label__ a;
        __label__ b;
        __label__ c;

        goto a;
a:
        printf("Block 2: a\n");
        goto b;
b:
        printf("Block 2: b\n");
        goto c;
c:
        printf("Block 2: c\n");
    }

    return EXIT_SUCCESS;
}
