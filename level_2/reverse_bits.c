//#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	result = 0;

	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (result);
}
/*
int	main(void)
{
	int	i = 8;
	unsigned char	bit = 0;
	unsigned char	res = reverse_bits((unsigned char)5);

	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
	return (0);
}*/
