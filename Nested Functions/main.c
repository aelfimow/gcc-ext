#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    void a(void)
    {
        void b(void)
        {
            void c(void)
            {
                void d(void)
                {
                    void e(void)
                    {
                        void f(void)
                        {
                            printf("Function f\n");
                        }

                        printf("Function e\n");
                        f();
                    }

                    printf("Function d\n");
                    e();
                }

                printf("Function c\n");
                d();
            }

            printf("Function b\n");
            c();
        }

        printf("Function a\n");
        b();
    }

    argc = argc;
    argv = argv;

    a();

    return EXIT_SUCCESS;
}
