//#include <stdio.h>

void	sort_in_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	unsigned int	j;
	int	temp;
	
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	arr[] = {3, 6, 9, 1, 4, 84, 33};
	unsigned int	size = 7;
	unsigned int	i = 0;

	sort_in_tab(arr, size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
