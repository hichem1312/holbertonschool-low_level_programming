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
unsigned int l, i, a;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
l = 0;
a = ac;
for (i = 0; i < a; i++)
{
	l = strlen(av[i]) + l;
}
*str = malloc(l);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
	strcat(str, av[i]);
	strcat(str, "\n");
}
return (str);
}
