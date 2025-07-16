#include <unistd.h>

void ft_putstr(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	r_capitalizer(char *str)
{
	int	i = 0;
	
	while (1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && ft_isspace(str[i + 1]))
			str[i] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z' && str[i + 1] == '\0')
			str[i] -= 32;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int	i = 1;
	while (i < argc)
	{
		r_capitalizer(argv[i]);
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
