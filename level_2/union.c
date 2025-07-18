#include <unistd.h>

int	main(int argc, char **argv)
{
        if (argc == 3)
        {
                int     i = 0;
                int     check[256] = {0};

                while (argv[1][i])
                {
                        unsigned char   c = argv[1][i];
                        if (!check[c])
                        {
                                check[c] = 1;
                                write(1, &c, 1);
                        }
                        i++;
                }
                i = 0;
                while (argv[2][i])
                {
                        unsigned char   c = argv[2][i];
                        if (!check[c])
                        {
                                check[c] = 1;
                                write(1, &c , 1);
                        }
                        i++;
                }
        }
        write(1, "\n", 1);
        return (0);
}

