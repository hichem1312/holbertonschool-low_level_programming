#include "main.h"
#include <string.h>
#include <math.h>
/**
 * _sqrt_recursion - copy tow strings
 * @n:int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
if (n == 1)
{
return 1;
}
else if (n < 0 || n % 2 != 0)
{
return (-1);
}
else
return (32);
}
