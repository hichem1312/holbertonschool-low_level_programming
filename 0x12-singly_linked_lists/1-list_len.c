#include "lists.h"
/**
 * list_len - number of elements linked
 * @h: str
 * */
size_t list_len(const list_t *h)
{
	int i = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{	if (h->str == NULL)
			return (i);
		else
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
