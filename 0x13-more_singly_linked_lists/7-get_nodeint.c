#include "lists.h"

/**
 * get_nodeint_at_index - returns a node
 * @head: first node
 * @index: i
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr;
ptr = head;
if (!ptr)
	return (NULL);
while (i < index)
{
	ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	i++;
}
return (ptr);
}
