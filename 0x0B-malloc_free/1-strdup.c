#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 *@str:char
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
unsigned int i;
char *p;

if (str == NULL)
{
	return (NULL);
}
else
{
	unsigned int size = strlen(str);
	p = malloc(sizeof(str) * (size + 1));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size ; i++)
			{
				p[i] = str[i];
			}
			return (p);
		}
}
}
