#include "main.h"
#include <string.h>
/**
 * _strncat - writes the character c to stdout
 * @dest:string
 * @src:string
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
int l1 = strlen(dest), i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[l1 + i] = src[i];
}
dest[l1 + i] = '\0';
return (dest);
}
