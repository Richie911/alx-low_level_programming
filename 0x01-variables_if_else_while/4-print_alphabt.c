#include <stdio.h>

/**
 * main - Print alphabets except q and e
 *
 * Return: 0
 */

int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		if (lower == 101 || lower == 113)
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
