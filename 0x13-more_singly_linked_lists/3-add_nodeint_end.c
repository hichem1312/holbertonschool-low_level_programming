#include "lists.h"
/*
 * add_nodeint_end- g
 * @head: v
 * @n: v
 * Return:  the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *ptr;
new = malloc(sizeof(listint_t));
if (!new)
	return (NULL);
new->n = n;
new->next = NULL;
ptr = *head;
while (ptr->next != NULL)
{
	ptr = ptr->next;
}
ptr->next = new;
return (*head);
}
