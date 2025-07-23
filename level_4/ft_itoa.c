#include <stdlib.h>
//#include <stdio.h>

int	get_num_length(int n)
{
	int	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	int	num;
	char	*str;

	len = get_num_length(nbr);
	num = nbr;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	if (num == 0)
        {
                str[0] = '0';
                return (str);
        }
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	return (str);
}
/*
int	main(void)
{
	int	num = 242;
	printf("El num es: %s\n", ft_itoa(num));
	return (0);
}*/
