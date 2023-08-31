#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			j++;
	}

	return (j);
}
