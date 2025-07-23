#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		int	start;
		char	*str = argv[1];

		while (str[i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && ft_isspace(str[i]))
				i--;
			if (i < 0)
				break;
			start = i;
			while (i >= 0 && !ft_isspace(str[i]))
				i--;
			write(1, &str[i + 1], start - i);
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
