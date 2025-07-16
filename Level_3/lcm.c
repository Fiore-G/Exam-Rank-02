//#include <stdio.h>
//#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	multiple;
	
	if (a > b)
		multiple = a;
	else
		multiple = b;
	if (a == 0 || b == 0)
		return (0);
	while (1)
	{
		if ((multiple % a == 0) && (multiple % b == 0))
			return (multiple);
		multiple++;
	}
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		unsigned int num = lcm(atoi(argv[1]), atoi(argv[2]));
		printf("LCM: %u\n", num);
	}
}*/
