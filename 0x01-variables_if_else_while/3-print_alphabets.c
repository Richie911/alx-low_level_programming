#include <stdio.h>

/**
 * main - Prints alphabets in lower case and then upper case
 *
 * Return: 0
 */

int main(void)
{
	int alpha = 97;
	int upper = 65;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
