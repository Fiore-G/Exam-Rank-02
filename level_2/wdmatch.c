#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 0;
		int	j = 0;
		char	*s1 = argv[1];
		char	*s2 = argv[2];

		while (s1[i])
		{
			while (s2[j] && s2[j] != s1[i])
				j++;

			if (s2[j] == '\0')
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
			j++;
		}
		i = 0;
		while (s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
