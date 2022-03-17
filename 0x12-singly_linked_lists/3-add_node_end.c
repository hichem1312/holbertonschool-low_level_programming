#include "lists.h"
/**
 * add_node_end - print list
 * @head: p
 * @str: p
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int ln;
list_t *p, *s;

	p = malloc(sizeof(list_t));
	if (!p)
		return (0);
	p->str = strdup(str);
	ln = strlen(str);
	p->len = ln;
	p->next = NULL;
	if (!*head)
		*head = p;
	else
	{
		s = *head;
		while (s->next)
			s = s->next;
		s->next = p;
	}
return (*head);
}
