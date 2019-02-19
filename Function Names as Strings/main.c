#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(int argc, char *argv[])
{
    argc = argc;
    argv = argv;

    printf("__func__: %s\n", __func__);
    printf("__FUNCTION__: %s\n", __FUNCTION__);
    printf("__PRETTY_FUNCTION__: %s\n", __PRETTY_FUNCTION__);

    return EXIT_SUCCESS;
}
