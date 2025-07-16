#include <unistd.h>

void	ft_puthex(int n)
{
	if (n > 15)
		ft_puthex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_puthex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
