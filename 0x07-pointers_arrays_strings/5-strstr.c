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
{
char g[10000];
int j, i, v = 0, l = strlen(needle), l1 = strlen(haystack), k, m;
for (i = 0; i < l; i++)
{
for (j = 0; j < l1; j++)
{
if (haystack[j] == needle[i])
{
v = j;
i = l;
}
}
}
m = 0;
for (k = v; k < l1; k++)
{
g[m] = haystack [k];
m++;
}
haystack = g;
return (haystack);
}
