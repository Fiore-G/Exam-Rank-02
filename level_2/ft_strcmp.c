//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	
	while(s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1 = "Primer str";
	char	*s2 = "Segundo str";
	printf("Esta es la comparacion: %d\n", ft_strcmp(s1, s2));
	printf("Esta es la comparacion og: %d\n", strcmp(s1, s2));
	return (0);
}*/
