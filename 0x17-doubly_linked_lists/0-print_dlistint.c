#include  "lists.h"
/**
 * print_dlistint - print node list
 * @h: node list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *a = h;
	size_t i = 0;

	while (a)
	{
		i++;
		printf("%i\n", a->n);
		a = a->next;
	}
	return (i);
}
