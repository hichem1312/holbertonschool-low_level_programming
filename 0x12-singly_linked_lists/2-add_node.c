#include "lists.h"
/**
 * add_node - print list
 * @head: p
 * @str: p
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int ln;
list_t *p;

	p = malloc(sizeof(list_t));
	if (!p)
		return (0);
	p->str = strdup(str);
	ln = strlen(str);
	p->len = ln;
	p->next = *head;
	*head = p;
return (*head);
}
