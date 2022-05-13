#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: a list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
if (!head)
	return;
free(head);
while (head->next)
{
	head = head->next;
	free(head);
}
}
