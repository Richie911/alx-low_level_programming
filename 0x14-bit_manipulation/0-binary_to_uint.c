#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}
	return (value);
}
