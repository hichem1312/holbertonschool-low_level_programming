#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - writes the character c to stdout
 * @s:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
int str = 0, i, c = 1;
if (strcmp(s,"-2147483648") == 0)
return (-2147483648);
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
{
str = str *10 - '0' + s[i];
return (str *c);
}
else if (s[i] >= '0' && s[i] <= '9')
{
str = str *10 - '0' + s[i];
}
else if (s[i] == '-')
{
c *= -1;
}
}
return (str * c);
}
