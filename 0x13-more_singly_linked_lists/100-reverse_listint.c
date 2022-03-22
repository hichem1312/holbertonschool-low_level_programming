#include "lists.h"

/**
 * reverse_listint - reverses
 * @head: c
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL, *n = NULL;
while (*head)
{
	n = (*head)->next;
	(*head)->next = p;
	p = *head;
	*head = n;
}
*head = p;
return (*head);
}
