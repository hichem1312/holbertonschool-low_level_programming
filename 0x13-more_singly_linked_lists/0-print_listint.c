#include "lists.h"
/**
 * print_listint - print list
 * @h: p
 * Return: prints all the elements
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
