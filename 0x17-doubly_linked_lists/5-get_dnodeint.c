#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @head: list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (!head)
	return (NULL);
*new_node = *head;
while (i != index)
{
	new_node = head->next;
	head = head->next;
	i++;
}
while (head->next != NULL)
{
	head = head->next;
}
head->next = new_node;
new_node->prev = head;
new_node->next = NULL;
return (new_node);
}
