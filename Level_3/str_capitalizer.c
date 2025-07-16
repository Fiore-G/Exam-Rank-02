#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	i = 1;
	int	j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] += 32;
			j++;
		}
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && is_alpha(argv[i][j]))
					argv[i][j] -= 32;
			if (ft_isspace(argv[i][j]) && is_alpha(argv[i][j + 1]))
					argv[i][j + 1] -= 32;
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
