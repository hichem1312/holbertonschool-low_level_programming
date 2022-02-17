#include "main.h"
#include <string.h>
/**
 * _strcmp - compares tow strings
 * @s1:string
 * @s2:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
int l1 = strlen(s1), l2 = strlen(s2), n, i, x;
if (l1 > l2)
{
x = l2;
}
else if (l2 > l1)
{
x = l1;
}
for (i = 0; i <= x; i++)
{
if (s1[i] > s2[i])
{
n = s1[i] - s2[i];
return (n);
}
else if (s2[i] > s1[i])
{
n = s2[i] - s1[i];
return (n * -1);
}
}
return (0);
}
