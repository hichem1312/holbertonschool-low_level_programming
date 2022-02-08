#include "main.h"
/**
 * times_table - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
int j, i, a, b, v;  
for (i = 0; i <= 9; i++)
{
    for (j = 0; j <= 9; j++)
    {
	v = j * i;
	if (v >= 10)
	{
		a = v % 10;
		b = v / 10;
		_putchar(b + 48);
		_putchar(a + 48);
	}
	else
	{
	_putchar(' ');
        _putchar(v + 48);
	}
	if (j != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
}
}
