#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	result = 0;
	int	sign = 1;

	while (str[i] == ' '|| (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 'A' + 10;
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char 	*s = "Fio";
	printf("%d", ft_atoi_base(s, 10));
	return (0);
}
