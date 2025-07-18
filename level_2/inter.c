#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 0;
		int 	j;
		int	check[256] = {0};

		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !check[(int)argv[2][j]])
				{
					check[(int)argv[2][j]] = 1;
					ft_putchar(argv[2][j]);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
