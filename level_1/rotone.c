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
			if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
				c += 1;
			else if ((c == 'z') || (c == 'Z'))
				c -= 25;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
