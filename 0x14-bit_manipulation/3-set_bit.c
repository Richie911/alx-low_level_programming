#include <stdio.h>

/**
 * set_bit - sets a bit at some index to 1
 * @n: pointer
 * @index: index
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1UL << index) | *n;
	return (1);
}

