#include "main.h"
/**
 * print_last_digit - writes the character c to stdout
 * @i:last
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int i)
{
int v, b;
unsigned long int e;
if (i == 0)
{
_putchar('0');
return (0);
}
else if (i <= 0)
{
e = i * (-1);
v = e % 10;
b = v + 48;
_putchar(b);
return (v);
}
else
{
v = i % 10;
b = v + 48;
_putchar(b);
return (v);
}
}
