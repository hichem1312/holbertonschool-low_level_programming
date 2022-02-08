#include "main.h"
/**
 * _abs - writes the character c to stdout
 * @j: kok
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int j)
{
if (j >= 0)
{
return (j);
}
else
{
j = j - (2 * j);
return (j);
}
}
