#include "lists.h"
/**
 * print_list - print list
 * @h: str
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
