#include "main.h"
/**
 * print_rev - writes the character c to stdout
 * @s:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
int l = 0, i, j;
for (i = 0; s[i] != '\0'; i++)
{
l++;
}
for (j = l - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
