#include "main.h"

/**
 * _isupper - uppercase
 * @c: char
 *
 * Return: 0 if uppercase, 1 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
