#include "main.h"
/**
 * print_diagonal - writes the character c to stdout
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
int x, i, j;
if (n > 0)
{
x = 0;
for (i = 0; i < n; i++)
{
for (j = 0; j < x; j++)
{
_putchar(' ');
}
x++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
