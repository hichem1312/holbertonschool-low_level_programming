#include "main.h"
/**
 * print_to_98 - writes the character c to stdout
 *@n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else if (n < 98)
{
printf("%d, ", n);
n++;
}
}
printf("98");
printf("\n");
}
