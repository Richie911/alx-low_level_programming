#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: argument types
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int i = 0;
	char *str, *separator = "";

	va_start(all, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(all, double));
					break;
				case 's':
					str = va_arg(all, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
