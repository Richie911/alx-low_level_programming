#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10X.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
