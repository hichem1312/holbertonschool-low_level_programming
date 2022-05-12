#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: a list
 * @n: the new node
 * Return: a new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	a = malloc(sizeof(dlistint_t));
	if (!a)
		return (0);
	a->n = n;
	a->prev = NULL;
	a->next = *head;
	if (*head)
		(*head)->prev = a;
	*head = a;
	return (a);
}

