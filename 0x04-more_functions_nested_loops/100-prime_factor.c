#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int max = -1;
	long int i;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);

	return (0);
}
