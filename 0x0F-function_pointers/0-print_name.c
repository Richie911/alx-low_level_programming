#ifndef PRINT_NAME_H
#define PRINT_NAME_H
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

	if (name == NULL || f == NULL)
		return;
	newFunc(name);
}
#endif
