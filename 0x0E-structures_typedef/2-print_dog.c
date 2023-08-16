#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{	
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		if (d->age == NULL)
		{
			printf("Age: %i\n", "(nil)");
		}
		else
		{
			printf("Age: %i\n", d->age);
		}
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
