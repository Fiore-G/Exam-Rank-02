#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	(void)argv;
	//(argc - 1) because we don't have to count the name of the program.
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
