#include "lists.h"
/**
 * dlistint_len - print the number of elements
 * @h: list
 * Return: the number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		h = h->next;
		x += 1;
	}
return (x);
}
