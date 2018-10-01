#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    typeof (argc) i = 1;

    bool flag = false;

    while (i < 0)
    {
        flag = flag ? : (argv[i][0] > 'c');
        ++i;
    }

    printf("Result: %s\n", flag ? "true" : "false");

    return EXIT_SUCCESS;
}
