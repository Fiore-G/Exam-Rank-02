#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	size_t	j;
	
	while (s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str = "Hola vale";
	char	*rej = "Buenas vale";
	printf("Cantidad de string: %zu\n", ft_strcspn(str, rej));
	printf("Cantidad de string: %zu\n", strcspn(str, rej));
	return (0);
}*/
