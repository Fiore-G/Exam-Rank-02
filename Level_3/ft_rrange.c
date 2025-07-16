#include <stdlib.h>
#include <stdio.h>

int	get_range_length(int start, int end)
{
	int	len = end - start;
	if (len < 0)
		len = -len;
	return (len + 1);
}

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = get_range_length(start, end);
	int	*range = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (end > start)
			range[i] = end--;
		else
			range[i] = end++;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	i = 0;
	int	start = 2;
	int	end = 5;
	int	len = get_range_length(start, end);
	int	*range = ft_rrange(start, end);

	while (i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}*/
