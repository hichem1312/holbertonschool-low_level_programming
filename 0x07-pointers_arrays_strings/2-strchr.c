#include "main.h"
#include <string.h>
/**
 * _strchr - writes the character c to stdout
 * @s:string
 * @c:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
while ((*s != c) && (*s != '\0'))
{
s++;
}
if (*s == c)
return (s);
else
return (NULL);
}
