#include "main.h"
/**
 * addition - writes the character c to stdout
 * 
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void addition(void)
{
int x, s;
s = 0;
for (x = 0 ; x <= 1024 ; x++)
{
if (x % 3 == 0)
{
s += x;
}
if (x % 5 == 0)
{
s += x;
}
}
return (x);
}
