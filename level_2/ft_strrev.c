//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = ft_strlen(str) - 1;
	char	c;

	if(!str)
		return (NULL);
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Hole";
	printf("Sin rev: %s\n", str);
	printf("Con rev: %s\n", ft_strrev(str));
	return (0);
}*/
