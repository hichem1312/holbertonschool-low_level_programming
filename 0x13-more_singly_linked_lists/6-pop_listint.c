#include "lists.h"
/**
 * pop_listint - f
 * @head: v
 * Return: v
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int count;
if (!*head)
	return (0);
count = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (count);
}
