#include "main.h"
/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i, p, s, d, k;
char x, v;
for (i = 0; i <= 10; i++)
{
v = '0';
if (i == 0)
{
for (k = 0; k <= 9; k++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
else
{
p = v + 1;
for (x = '0'; x <= '9'; x++)
{
p *= x;
if (p >= '9')
{
d = p % 10;
s = p / 10;
_putchar(s + 48);
_putchar(d + 48);
}
else
{
_putchar(p + 48);
}
_putchar(',');
_putchar(' ');
p++;
}
_putchar('\n');
}
v++;
}
}
