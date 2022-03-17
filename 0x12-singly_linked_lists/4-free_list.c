#include "lists.h"
/**
 * free_list- writes the character c to stdout
 * @head: The head
 *
 * Return: g
 */
void free_list(list_t *head)
{
	list_t *p;

while (head)
{
	p = head->next;
	free(head->str);
	free(head);
	head = p;
}
}
