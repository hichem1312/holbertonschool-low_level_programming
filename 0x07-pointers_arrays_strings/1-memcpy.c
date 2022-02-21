#include "main.h"
#include <string.h>
/**
 * _memcpy - writes the character c to stdout
 * @dest:string
 * @src:string
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *s = (char *)src;
char *d = (char *)dest;
unsigned int i;

for (i = 0; i < n; i++)
d[i] = s[i];
return (d);
}
