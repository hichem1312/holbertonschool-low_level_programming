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
int i, s, j;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
s = 0;
for (i = 0; i < ac; i++)
{
	for (j = 0; j < (int)strlen(av[i]); j++)
	{
		s++;
	}
}
str = malloc(s + ac + 1);
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
