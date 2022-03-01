#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 *@size:integer
 *@c:char
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ch;
if (size == 0)
	return (NULL);
else
{
	ch = malloc(sizeof(c) * size);
	if (ch == (NULL))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
}
