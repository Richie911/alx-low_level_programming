#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int i, length;
	char c;
	i = 0;
	length = 0;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
