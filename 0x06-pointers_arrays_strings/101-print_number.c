#include "main.h"
#include <string.h>
/**
 * print_number - writes the character c to stdout
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
int x, s, k, i, r = 1;

if (n == 0)
{
_putchar(48);
return;
}
if (n < 0)
{
n = -n;
_putchar('-');
}
x = n;
s = 0;
while (x >= r)
{
r = r * 10;
s += 1;
}
r /= 10;
for (i = 0; i < s; i++)
{
k = n / r;
n = n % r;
r /= 10;
if (n < r)
{
_putchar(k + 48);
_putchar(48);
r /= 10;
i++;
}
else
{
_putchar(k + 48);
}
}
}
