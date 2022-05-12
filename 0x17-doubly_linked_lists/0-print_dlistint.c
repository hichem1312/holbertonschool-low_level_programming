#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: list
 * Return: number of elements
 * */
size_t print_dlistint(const dlistint_t *h)
{
int x = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x += 1;
	}
return(x);
}
