#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	i = 0;
		int	j = 0;
		char	*s1 = argv[1];
		char	*s2 = argv[2];

		while (s2[j] && s1[i])
		{
			if (s2[j] == s1[i])
				i++;
			j++;
		}			
		if (s1[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
