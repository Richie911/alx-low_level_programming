#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - a structure for a dog
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
