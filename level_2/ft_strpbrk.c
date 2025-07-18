//#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;
	char	*re = (char *)s1;

	while (s1[i])
	{
		j = 0;
		while (s2[i])
		{
			if (s1[i] == s2[j])
				return (re);
			j++;
		}
		i++;
		re++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "Hola cocacola";
	char	*pbrk = "caramba";
	printf("Pbrk :%s\n", ft_strpbrk(s, pbrk));
	return (0);
}*/
