#include "main.h"
#include <string.h>
/**
 * _strpbrk - writes the character c to stdout
 * @s:string
 * @accept:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
int j, v = 0, l1 = strlen(accept);
while (*s != '\0' && v == 0)
{
for (j = 0; j < l1; j++)
{
if (*s == accept[j])
{
j = l1;
v = 1;
}
}
if (v == 0)
s++;
}
if (v == 1)
return (s);
else
return (NULL);
}
