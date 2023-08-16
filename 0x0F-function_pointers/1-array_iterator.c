#include <stdio.h>
/**
 * array_iterator - prints each array element
 * @array: array
 * @size: array size
 * @action: pointer to func
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
