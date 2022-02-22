#include "main.h"
#include <string.h>
/**
 * _strstr - writes the character c to stdout
 * @haystack:string
 * @needle:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{char g[10000];
int x = 0, s, p, j, i, y, v = 0, l = strlen(needle),
l1 = strlen(haystack), k, m;
for (i = 0; i < l; i++)
{
for (j = 0; j < l1; j++)
{
if (haystack[j] == needle[i])
{
p = 0;
s = 0;
for (k = j; k < l + j && s != l; k++)
{
if (haystack[k] == needle[p])
{
s = s + 1;
p++;
}
if (s == l)
{
v = j;
i = l;
j = l1;
x = 1;
}
}
}
}
}
if (x == 1)
{
m = 0;
for (y = v; y < l1; y++)
{g[m] = haystack[y];
m++;
}
haystack = g;
return (haystack);
}
else
return (NULL);
}
