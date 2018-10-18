#include <stdlib.h>
#include <stdio.h>

static void print_complex(_Complex double value)
{
    printf("%f + j%f\n", __real__ value, __imag__ value);
}

int main(int argc, char *argv[])
{
    int i = 1;
    int k = 0;

    while (i < argc)
    {
        int k = 0;

        while (argv[i][k] != '\0')
        {
            ++k;

            switch (argv[i][k])
            {
                case 'a' ... 'z':
                    printf("Small: %c\n", argv[i][k]);
                    break;
                    
                case 'A' ... 'Z':
                    printf("Big: %c\n", argv[i][k]);
                    break;

                default:
                    printf("Unknown: %c\n", argv[i][k]);
                    break;
            }
        }

        ++i;
    }

    return EXIT_SUCCESS;
}
