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
int a, b, c = 0;
if (argc != 2)
{
c = c + 1;
printf("Error\n");
return (c);
}
else
{
a = atoi(argv[1]);
b = a / 25;
a = a % 25;
c += b;
if ((a / 10) > 0)
{
b = a / 10;
a = a % 10;
c += b;
}
if ((a / 5) > 0)
{
b = a / 5;
a = a % 5;
c += b;
}
if ((a / 2) > 0)
{
b = a / 2;
a = a % 2;
c += b;
}
if (a > 0)
{
c++;
}
printf("%d\n", c);
return (0);
}
}
