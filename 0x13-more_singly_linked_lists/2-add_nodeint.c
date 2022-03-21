#include "lists.h"
/*
 * add_nodeint- n
 * @head: h
 * @n: n
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *l;
l = malloc(sizeof(listint_t));
if (!l)
	return(NULL);
l->n = n;
l->next = *head;
*head = l;
return (*head);
}
