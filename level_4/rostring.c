#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int     main(int argc, char **argv)
{
        if (argc >= 2)
        {
                int     i = 0;
		int	start;
		int	end;
                int     printed_word = 0;
                char    *str = argv[1];

		while (ft_isspace(str[i]))
			i++;
		start = i;
		while (str[i] && !ft_isspace(str[i]))
			i++;
		end = i;
		while (str[i])
		{
			while (ft_isspace(str[i]))
				i++;
			if (!str[i])
				break ;
			if (printed_word)
				write(1, " ", 1);
			while (str[i] && !ft_isspace(str[i]))
			{
				write(1, &str[i], 1);
				i++;
			}
			printed_word = 1;
		}
		if (printed_word)
			write(1, " ", 1);
		write(1, &str[start], end - start);
        }
        write(1, "\n", 1);
        return (0);
}

