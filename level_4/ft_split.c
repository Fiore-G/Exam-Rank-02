#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

char	*ft_strndup(char *str, int len)
{
	int	i = 0;
	char	*dest = (char *)malloc(sizeof(char) * len + 1);

	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int	i;
	int	wc;
	int	start;
	int	end;
	int	w_index;
	char	**split;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !ft_isspace(str[i]))
			i++;
	}
	split = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!split)
		return (NULL);
	i = 0;
	w_index = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		start = i;
		while (str[i] && !ft_isspace(str[i]))
			i++;
		end = i;
		if (end > start)
		{
			split[w_index] = ft_strndup(&str[start], end - start);
			if (!split[w_index])
				return (NULL);
			w_index++;
		}
	}
	split[w_index] = NULL;
	return (split);
}

int	main(void)
{
	char	**words = ft_split("Vamos a hacer un split aqui");
	int	i = 0;

	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}

	return (0);
}
