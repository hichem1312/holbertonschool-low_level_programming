#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
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
