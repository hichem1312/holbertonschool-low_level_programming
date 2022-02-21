#include "main.h"
#include <string.h>
/**
 * _strspn - d
 * @s:string
 * @accept:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
int l = strlen(s), l1 = strlen(accept), i, j;
unsigned int u;
u = 0;
for (i = 0; i < l; i++)
{
j = 0;
while (s[i] != accept[j] && j < l1)
{
j++;
}
if (s[i] == accept[j])
{
	u += 1;
}
else
{
	i = l;
	j = l1;
}
}
return (u);
}
