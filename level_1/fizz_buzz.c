#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)\
			write(1, "fizzbuzz\n", 8);
		else if (i % 3 == 0)
			write(1, "fizz\n", 4);
		else if (i % 5 == 0)
			write(1, "buzz\n", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
