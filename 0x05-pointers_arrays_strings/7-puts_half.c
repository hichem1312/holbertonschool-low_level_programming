#include "main.h"
#include <string.h>
/**
 * puts_half - writes the character c to stdout
 * @str:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
int i, l, li;
l = strlen(str);
if (l % 2 == 0)
{
li = l / 2;
}
else
{
li = (l + 2) / 2;
}
for (i = li; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
