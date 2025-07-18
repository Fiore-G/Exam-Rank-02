#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int 	i = 0;
		char	*str = argv[1];

		while(str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
				ft_putchar('_');
			}
			write(1, &str[i], 1);
                	i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
