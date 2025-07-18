//#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i = 1;
	int	result = tab[0];
	
	if (!tab || len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int	a[] = {2, 1, 6, 3};
	printf("%d\n", max(a, 4));
	return (0);
}*/
