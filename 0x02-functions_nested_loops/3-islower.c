#include "main.h"

/**
 * _islower - Displays 1 if the input is lowercase.
 * others displays 0.
 *
 *@c: ASCII Character
 *
 * Return: 1 for lowercase and 0 for others
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
