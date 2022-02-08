#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - test the sign of number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
char i, j, k, l, y, x, o;
for (i = '0'; i <= '2'; i++)
{
j = 0;
while (j <= '9' && i < 2)
{
for (k = '0'; k <= '5'; k++)
{
for (l = '0'; l <= '9'; l++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(l);
_putchar('\n');
}
}
j++;
}
for (y = '0'; y <= '3'; y++)
{
for (x = '0'; x <= '5'; x++)
{
for (o = '0'; o <= '9'; o++)
{
_putchar(i);
_putchar(y);
_putchar(':');
_putchar(x);
_putchar(o);
_putchar('\n');
}
}
}
}
}
