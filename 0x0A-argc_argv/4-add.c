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
int i, s = 0, x = 0;
for (i = 1; i < argc; i++)
{
x = atoi(argv[i]);
if (x > 0)
s = s + x;
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
return (x);
}
}
