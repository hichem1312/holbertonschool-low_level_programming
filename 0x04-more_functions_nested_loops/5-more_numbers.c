#include "main.h"
/**
 * more_numbers - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
int i, a, b, c, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
c = i;
if (i > 9)
{
a = i % 10;
b = i / 10;
_putchar(b + 48);
c = a;
}
_putchar(c + 48);
}
_putchar('\n');
}
}
