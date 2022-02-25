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
int s;
if (argc == 3)
{
s = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", s);
}
else
printf("Error\n");
return (0);
}
