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
char i, j, k, l;
for (i = '0'; i <= '2'; i++)
{
for (j = '0'; j <= '3'; j++)
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
}
}
}
