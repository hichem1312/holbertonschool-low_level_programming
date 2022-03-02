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
int i, a, s, j;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
a = ac;
s = 0;
for (i = 0; i < a; i++)
{
	for(j = 0; j < (int)strlen(av[i]); j++)
	{
		s++;
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
