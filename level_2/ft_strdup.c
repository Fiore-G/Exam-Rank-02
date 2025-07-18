#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	i= 0;
	char	*dest = (char *)malloc(sizeof(char) * i);
	
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Funciona?";
	printf("Hacemos un duplicado: %s\n", ft_strdup(src));
	return (0);
}*/
