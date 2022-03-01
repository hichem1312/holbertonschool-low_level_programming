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
int i;
int l;
char * str;
l = 1;
for (i = 0; i < ac; i++)
{
	l = strlen(av[i]) + l;
}
str = malloc(sizeof(char) * l);
for (i = 0; i < ac; i++)
{
	strcat(str, av[i]);
	strcat(str, "\n");
}
return (str);
}
