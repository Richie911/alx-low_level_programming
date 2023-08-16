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
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
