#include "./lists.h"
/**
 * add_dnodeint - add node
 * @head: node head
 * @n: int
 * Return: node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
return (*head);
}
