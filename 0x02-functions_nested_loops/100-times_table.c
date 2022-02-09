#include "main.h"
/**
 * print_times_table - writes the character c to stdout
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
int i, j, v, y;
if (n < 15 && n > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
v = j * i;
if (v >= 10 && v < 100)
{
_putchar(' ');
_putchar((v / 10)  + 48);
_putchar((v % 10) + 48);

}
else if (v >= 100)
{
y = (v % 100);
_putchar((v / 100) + 48);
_putchar((y / 10) + 48);
_putchar((v % 10) + 48);
}
else
{
if (j > 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(v + 48);
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
