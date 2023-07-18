#include "main.h"

/**
 * _isalpha - displays 1 if input is a letter
 * Displays 0 if not a letter
 *
 * @c: ASCII Character
 *
 * Return: 1 for letters and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
