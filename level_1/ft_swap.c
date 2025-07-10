#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a = 12;
	int	b = 5;

	printf("Sin swap:\n %d\n %d\n", a, b);
	ft_swap(&a, &b);
	printf("Con swap:\n %d\n %d\n", a, b);
	return (0);
}*/
