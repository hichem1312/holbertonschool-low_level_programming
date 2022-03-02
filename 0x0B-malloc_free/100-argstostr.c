#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Entry point
 *@ac:int
 *@av:string
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
int i, a, l, s, j;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
a = ac;
l = 0;
s = 0;
for (i = 0; i < a; i++)
{
	l = strlen(av[i]) + l;
	for(j = 0; j < l; j++)
	{
		s += 1;
	}
}
str = malloc(sizeof(char *) * (s + ac));
if (str == NULL)
{
free(str);
return (NULL);
}
for (i = 0; i < ac; i++)
{
	strcat(str, av[i]);
	strcat(str, "\n");
}
return (str);
}