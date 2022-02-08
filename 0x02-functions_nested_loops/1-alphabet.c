#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int x;
x = 'a';
	while	(x <= 'z')
		{
		_putchar(x);
		x++;
		}
	_putchar('\n');
}
