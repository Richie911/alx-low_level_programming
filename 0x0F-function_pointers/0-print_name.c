#ifndef
#include <stdio.h>

/**
 * print_name - print name
 * @name: name
 * @f: func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*newFunc)(char *) = f;

	newFunc(name);
}
#endif
