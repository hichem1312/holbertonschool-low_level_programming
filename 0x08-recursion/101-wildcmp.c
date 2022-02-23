#include "main.h"
#include <string.h>
/**
 * wildcmp - p
 * @s1:string
 * @s2:str
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int wildcmp(char *s1, char *s2)
{
if (s1 == s2)
return (1);
else
return (0);
}
