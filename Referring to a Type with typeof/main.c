#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    typeof (argc) i = 0;
    typeof (argv[0]) p = 0;

    while (i < argc)
    {
        p = argv[i];
        printf("argv[%d] = %s\n", i, p);
        ++i;
    }

    return EXIT_SUCCESS;
}
