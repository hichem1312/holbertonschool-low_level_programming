#include "lists.h"
/**
 * free_listint2 - f
 * @head: v
 * Return: v
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (!*head)
return;
else
{
while ((*head) != NULL)
{
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
}
*head = NULL;
}
}
