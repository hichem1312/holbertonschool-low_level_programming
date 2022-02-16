#include "main.h"
#include <string.h>
/**
 * _strcat - writes the character c to stdout
 * @dest:string
 * @src:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
int l1 = strlen(dest), l2 = strlen(src), i;
for (i = 0; i <= l2; i++)
{
dest[l1 + i] = src[i];
}
return (dest);
}
