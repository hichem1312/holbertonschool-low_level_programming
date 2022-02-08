#include "main.h"
/**
 * times_table - writes the character c to stdout
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int i;
char x;
for (i = 0; i <= 10; i++)
{
if (i == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('\n');
}
else
{
p = '0';
for (x = '0'; x <= '9'; x++)
{
p *= x;
if (p >= '9')
{
d = p % 10;
s = p / 10;
_putchar(s);
_putchar(d);
}
else
{
_putchar(b);
}
_putchar(',');
_putchar(' ');
p++;
}
}
}
}

