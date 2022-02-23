#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - p
 * @s:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
int v = 0;
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
else if (v == 0)
{
_putchar('\n');
v = 1;
}
}
