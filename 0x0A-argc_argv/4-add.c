#include "main.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc:integer
 *@argv:string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int s, i;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) > 0)
{
s += atoi(argv[i]);
}
else
{
argc = 0;
break;
}
}
if (argc > 0)
{
printf("%d\n", s);
return (0);
}
else
{
printf("Error\n");
return (atoi(argv[i]));
}
}
