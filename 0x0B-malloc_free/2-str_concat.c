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
int s = strlen(s1);
int t = strlen(s2);
char *p;
if (s == 0 || t == 0)
{
	return (NULL);
}
else
{
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
}}
