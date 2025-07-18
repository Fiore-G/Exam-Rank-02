//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i = 0;
	size_t	j;

	while (s[i])
	{
		j = 0;
		while (charset[j])
		{
			if (s[i] == charset[j])
				break ;
			j++;
		}
		if (!charset[j])
			break ;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str = "Buenas nuevas";
	char	*charset = "Buenisimas tardes";
	printf("Cantidad en charset: %zu\n", ft_strspn(str, charset));
	printf("Cantidad en charset: %zu\n", strspn(str, charset));
	return (0);
}*/
