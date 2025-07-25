#include <stdio.h>

int	is_valid(char c, int str_base)
{
	char	*lower_base = "0123456789abcdef";
	char	*upper_base = "0123456789ABCDEF";
	in	i = 0;
	while (i < str_base)
	{
		if (c == lower_base[i] || c == upper_base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	result = 0;
	int	sign = 1;

	if (!str || str_base < 2 || str_base > 16)
		return (0);
	while (str[i] == ' '|| (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && is_valid(str[i], str_base))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char 	*s = "Fio";
	printf("%d", ft_atoi_base(s, 16));
	return (0);
}
