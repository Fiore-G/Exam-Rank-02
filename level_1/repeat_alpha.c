#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	i = 0;
		char	*str = argv[1];

		while(str[i])
		{
			char	c = str[i];
			int	repeat = 1;

			if (c >= 'a' && c <= 'z')
				repeat = c - 'a' + 1;
			else if (c >= 'A' && c <= 'Z')
				repeat = c - 'A' + 1;
			while (repeat--)
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
