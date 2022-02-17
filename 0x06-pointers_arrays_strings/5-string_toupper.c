#include "main.h"
#include <string.h>
/**
 * string_toupper - writes the character c to stdou
 * @t:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *t)
{
int l = strlen(t), i;
for (i = 0; i < l; i++)
{
if (t[i] >= 97 && t[i] <= 122)
{
t[i] = t[i] - 32;
}
}
return (t);
}
