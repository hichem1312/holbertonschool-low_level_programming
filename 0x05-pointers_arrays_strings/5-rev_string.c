#include "main.h"
#include <string.h>
/**
 * rev_string - writes the character c to stdout
 * @s:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int l = 0, i, j, u;
char p[10000];
for (i = 0; s[i] != '\0'; i++)
{
l++;
}
u = 0;
for (j = l - 1; j >= 0; j--)
{
p[u] = (s[j]);
u++;
}
strcpy(s,p);
}
