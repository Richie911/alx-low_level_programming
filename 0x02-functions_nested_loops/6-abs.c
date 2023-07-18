#include "main.h"

/**
 * _abs - computes absolute value of integers.
 *
 * @i: integer
 *
 * Return: absolute values
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
		return (i * -1);
}
