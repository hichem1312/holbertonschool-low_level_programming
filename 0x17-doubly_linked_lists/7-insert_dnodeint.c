#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx:  is the index of the list where the new node should be added
 * @n:  the new node should be added
 * Return: new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *old;
unsigned int i = 0;
new_node = malloc(sizeof(dlistint_t));
if (!h)
	return (NULL);
old = *h;
if (idx == 0)
{
	new_node = add_dnodeint(h, n);
	return (new_node);
}
while (i != idx && old->next != NULL)
{
	i++;
	old = old->next;
}
if (i != idx)
	return (NULL);
if (old->next == NULL)
{
	new_node = add_dnodeint_end(h, n);
	return (new_node);
}
new_node->n = n;
new_node->prev = old->prev;
new_node->next = old;
new_node->prev->next = new_node;
old->prev = new_node;
return (new_node);
}
