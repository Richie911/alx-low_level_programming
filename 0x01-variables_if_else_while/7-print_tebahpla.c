#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
