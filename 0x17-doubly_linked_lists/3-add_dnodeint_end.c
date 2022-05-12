#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end
 * @head: list
 * @n: node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *new_node2;
new_node = malloc(sizeof(dlistint_t));

if (!new_node)
	return (NULL);
new_node->n = n;
if (*head == NULL)
{
new_node->prev = NULL;
new_node->next = NULL;
*head = new_node;
}
else
{
new_node2 = *head;
while (new_node2->next != NULL)
new_node2 = new_node2->next;
new_node2->next = new_node;
new_node->next = NULL;
new_node->prev = new_node2;
}
return (new_node);
}
