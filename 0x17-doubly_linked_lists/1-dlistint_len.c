#include "./lists.h"
/**
 * dlistint_len - length
 * @h: node list
 * Return: length of node
 */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *a = h;
size_t i = 0;
while (a)
{
i++;
a = a->next;
}
return (i);
}
