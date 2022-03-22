#include "lists.h"
/**
 * listint_len: c
 * @h: b
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
