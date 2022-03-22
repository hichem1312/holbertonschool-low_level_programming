#include "lists.h"
/**
 * sum_listint - f
 * @head: v
 * Return: v
 */
int sum_listint(listint_t *head)
{
int s = 0;
if (!head)
	return (0);
while (head)
{
	s += head->n;
	head = head->next;
}
return (s);
}
