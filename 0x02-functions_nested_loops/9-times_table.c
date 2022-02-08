#include "main.h"
/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i, p, s, d, k, v;
char x;
for (k = 0; k <= 9; k++)
{
_putchar('0');
if (k != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
v = 0;
for (i = 0; i < 9; i++)
{
p = v + 1;
for (x = 0; x <= 9; x++)
{
if (x == 0)
{
_putchar('0');
}
else
{
p *= x;
if (p >= 9)
{
d = p % 10;
s = p / 10;
_putchar(s);
_putchar(d);
}
else
{
_putchar(p);
}
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
v++;
}
}

