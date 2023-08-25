#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements in list
 * @h: pointer to list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}

	return (i);
}

