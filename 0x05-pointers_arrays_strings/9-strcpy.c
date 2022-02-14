#include "main.h"
#include <string.h>
/**
 * *_strcpy - writes the character c to stdout
 * @dest:character
 * @src:character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcpy(char *dest, char *src)
{
int l, i;
l = strlen(src);
for (i = 0; i <= l; i++)
{
dest[i] = src[i];
}
return (dest);
}
