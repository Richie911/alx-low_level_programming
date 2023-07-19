#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: parameter
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%i", n);
				printf("\n");
				break;
			}
			else
				printf("%i, ", n);
		}
	}
	else
	{
		for (; n > 97; n--)
		{
			if (n == 98)
			{
				printf("%i", n);
				printf("\n");
				break;
			}
			else
				printf("%i, ", n);
		}
	}
}
