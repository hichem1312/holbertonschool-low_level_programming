#include "main.h"
#include <string.h>
/**
 * leet - writes the character c to stdout
 * @s:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *s)
{
int i, j;
char ch[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char sh[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == ch[j])
{
s[i] = sh[j];
}
}
}
return (s);
}
