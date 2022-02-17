#include "main.h"
#include <string.h>
/**
 * cap_string - writes the character c to stdout
 * @s:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *s)
{
int l = strlen(s), i;
for (i = 0; i < l; i++)
{
if ((s[i] >= 97 && s[i] <= 122) && i == 0)
{
s[i] = s[i] - 32;
}
else if ((s[i] >= 97 && s[i] <= 122) && (s[i - 1] == 32 || s[i - 1] == '\t'
			|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '\"'
			|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
			|| s[i - 1] == '}' || s[i - 1] == '\n'))
{
s[i] = s[i] - 32;
}
}
return (s);
}
