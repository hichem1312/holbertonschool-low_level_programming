#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calcul
 * @argc: ar
 * @argv: ar
 * Return: 0
 */
int main(int argc, char *argv[])
{
int (*i)(int, int);
int c, v;
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
c = atoi(argv[1]);
v = atoi(argv[3]);
i = get_op_func(argv[2]);
if (!i)
{
	printf("Error\n");
	exit(99);
}
printf("%d\n", i(c, v));
return (0);
}
