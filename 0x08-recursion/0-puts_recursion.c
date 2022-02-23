#include "main.h"
#include <string.h>
/**
 * _puts_recursion - copy tow strings
 * @s:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
s++;
_puts_recursion(s);
}
