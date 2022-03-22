#include "lists.h"
/**
 * free_listint2 - f
 * @head: v
 * Return: v
 */
void free_listint2(listint_t **head)
{
if (!*head)
return;
else
{
while ((*head)->next != NULL)
{
	free(*head);
	*head = (*head)->next;
}
*head = NULL;
}
}
