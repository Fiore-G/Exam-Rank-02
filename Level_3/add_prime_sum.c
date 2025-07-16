#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
	       result = result * 10 + (str[i] - '0');
	       i++;
	}
	return (result * sign);
}

int	isprime(int n)
{
	int	i = 2;

	if (n < 2)
		return (0);
	while (i * i <=  n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2 || ft_atoi(argv[1]) <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
	       	int     num = ft_atoi(argv[1]);
	        int     sum = 0;
		
		while (num >= 2)
		{
			if (isprime(num))
				sum += num;
			num--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
