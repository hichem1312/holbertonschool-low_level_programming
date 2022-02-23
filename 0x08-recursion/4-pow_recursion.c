#include "main.h"
#include <string.h>
/**
 * _pow_recursion - copy tow strings
 * @y:int
 * @x:int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
if (x == 1)
return (1);
else if (y == 0)
return (1);
else if (y < 0)
return (-1);
else
return (x * _pow_recursion(x, y - 1));
}
