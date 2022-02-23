#include "main.h"
#include <string.h>
/**
 * factorial - copy tow strings
 * @n:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
if (n >= 1)
return (n * factorial(n - 1));
else if (n < 0)
return (-1);
else
return (1);
}
