#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		char	*str = argv[1];
		int	space = 0;

		while (ft_isspace(str[i]))
			i++;
		while (str[i])
		{
			if (ft_isspace(str[i]))
				space = 1;
			if (!ft_isspace(str[i]))
			{
				if (space)
					write(1, " ", 1);
				space = 0;
				write(1, &str[i], 1);
			}
			i++;

		}
	}
	write(1, "\n", 1);
	return (0);
}
