#include "main.h"
#include <string.h>
/**
 * is_prime_number - p
 * @n:int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
if (n % 2 == 0 || n < 2)
return (0);
else
return (1);
}
