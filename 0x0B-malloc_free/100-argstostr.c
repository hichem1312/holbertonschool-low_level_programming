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
int i, a, l, k, j;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
a = ac;
l = 0;
for (i = 0; i < a; i++)
{
	l = strlen(av[i]) + l;
}
str = malloc(sizeof(char *) * l);
if (str == NULL)
{
return (NULL);
}
k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
return (str);
}
