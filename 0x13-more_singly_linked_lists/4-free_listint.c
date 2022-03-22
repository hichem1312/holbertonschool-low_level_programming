#include "lists.h"
/**
 * free_listint - f
 * @head: v
 * Return: v
 */
void free_listint(listint_t *head)
{
if (!head)
return;
else
{
while (head->next != NULL)
{
	free(head);
	head = head->next;
}
free(head);
}
}
