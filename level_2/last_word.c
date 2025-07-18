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

		while (str[i])
			i++;
		i--;
		while (i >= 0 && ft_isspace(str[i]))
			i--;
		int	last_w = i;
		while (i >= 0 && !ft_isspace(str[i]))
			i--;
		i++;
		while (i <= last_w)
		{
			write(1, &str[i], 1);
			i++;
		}
		
		
	}
	write(1, "\n", 1);
	return (0);
}
