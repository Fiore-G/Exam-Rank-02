#include <stdlib.h>
//#include <stdio.h>

int	get_range_length(int start, int end)
{
	int	len = end - start;

	if (len < 0)
		len = -len;
	return (len + 1);
}

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	len = get_range_length(start, end);
	int     *range = (int *)malloc(sizeof(int) * len);
	
	if (!range)
		return (NULL);
	while (i < len)
	{
		if (start < end)
			range[i] = start++;
		else
			range[i] = start--;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	start = 0;
	int	end = -3;
	int	len = get_range_length(start, end);
	int	i = 0;
	int	*range = ft_range(start, end);

	while (i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}*/
