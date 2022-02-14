#include "main.h"
/**
 * _puts - writes the character c to stdout
 * @str:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
