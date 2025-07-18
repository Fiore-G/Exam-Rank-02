//#include <stdio.h>

int	is_power_of_2(int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}
/*
int	main(void)
{
	 int	num = 13;
	 int    num1 = 25;
	 int    num2 = 18;
	 int    num3 = 32;
	 int    num4 = 6;
	 printf("Let's see if it's power of 2: %d\n", is_power_of_2(num));
	 printf("Let's see if it's power of 2: %d\n", is_power_of_2(num1));
	 printf("Let's see if it's power of 2: %d\n", is_power_of_2(num2));
	 printf("Let's see if it's power of 2: %d\n", is_power_of_2(num3));
	 printf("Let's see if it's power of 2: %d\n", is_power_of_2(num4));
	 return (0);
}*/
