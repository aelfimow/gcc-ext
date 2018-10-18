#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;

    while (i < argc)
    {
        int k = 0;

        while (argv[i][k] != '\0')
        {
            const char c = argv[i][k];

            switch (c)
            {
                case 'a' ... 'z':
                    printf("Small: %c\n", c);
                    break;
                    
                case 'A' ... 'Z':
                    printf("Big: %c\n", c);
                    break;

                default:
                    printf("Unknown: %c\n", c);
                    break;
            }

            ++k;
        }

        ++i;
    }

    return EXIT_SUCCESS;
}
