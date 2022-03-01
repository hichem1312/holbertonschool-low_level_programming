#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 *@s1:char
 *@s2:char
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
int k, i, j;
int s = 0;
int t = 0;
char *p;
if (s1 != NULL)
	s = strlen(s1);
if (s2 != NULL)
{
	t = strlen(s2);
}
	p = malloc(sizeof(char) * ((s + t) + 1));
		if (p == NULL)
			return (NULL);
	for (i = 0; i < s; i++)
	{
		p[i] = s1[i];
	}
	k = s - 1;
	for (j = 0; j < t; j++)
	{
		k++;
		p[k] = s2[j];
	}
	return (p);
}
