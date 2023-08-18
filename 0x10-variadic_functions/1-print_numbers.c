#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers separated by ,
 * @separator: separator
 * @n: count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(num, int));
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
