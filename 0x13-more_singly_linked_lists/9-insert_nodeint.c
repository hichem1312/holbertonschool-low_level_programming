#include "lists.h"
/**
 * insert_nodeint_at_index - I
 * @head: head
 * @idx: inde
 * @n: r
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr;
listint_t *new_idx;
unsigned int i = 0;
ptr = NULL;
if (head)
{
	new_idx = malloc(sizeof(listint_t));
	if (new_idx == NULL)
		return (NULL);
	new_idx->n = n;
	new_idx->next = NULL;
	if (idx != 0)
	{
		ptr = *head;
		while (ptr)
		{
			if (i == idx - 1)
			{
				new_idx->next = ptr->next;
				ptr->next = new_idx;
				return (new_idx);
			}
			ptr = ptr->next;
			i++;
		}
		if (idx > i)
			return (NULL);
	}
	else
	{
		new_idx->next = *head;
		*head = new_idx;
	}
	return (new_idx);
}
return (NULL);
}
