#include "main.h"
#include <string.h>
/**
 * rot13 - writes the character c to stdout
 * @s:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *s)
{
int i, j, x;
char ch[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
	'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
	'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char sh[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o',
	'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd',
	'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
for (i = 0; s[i] != '\0'; i++)
{
x = 0;
for (j = 0; j < 52; j++)
{
if (s[i] == ch[j] && x == 0)
{
s[i] = sh[j];
x = 1;
}
}
}
return (s);
}
