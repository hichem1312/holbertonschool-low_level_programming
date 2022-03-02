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
unsigned int i, a;
char *str;
if (ac == 0 || av == NULL)
	return (NULL);
a = ac;
str = malloc(sizeof(char *));
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
