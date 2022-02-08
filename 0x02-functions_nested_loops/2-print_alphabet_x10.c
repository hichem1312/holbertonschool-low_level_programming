#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int x, i;
	for( i = 0 ; i < 10 ; i++ )
	{
	x = 'a';
	while	(x <= 'z')
		{
		_putchar(x);
		x++;
		}
		_putchar('\n');
	}
}
