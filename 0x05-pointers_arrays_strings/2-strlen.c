#include "main.h"
#include <string.h>
/**
 * _strlen - writes the character c to stdout
 * @s:d
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
int lengt = 0, i;
for (i =0; s[i] != '\0'; i++)
lengt++;
return (lengt);
}
