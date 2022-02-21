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
int l = strlen(s), i, j, x;
char ch[1000000];
x = 0;
for (i = 0; i < l && x == 0; i++)
{
if (c == '\0')
return ('\0');
else if (c == s[i])
{
for (j = i; j <= l; j++)
{
ch[j - i] = s[j];
x += 1;
}
}
}
s = ch;
return (s);
}
