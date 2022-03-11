#include "variadic_functions.h"

/**
 * sum_them_all - p
 * @n: int
 * @op: st
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int s;
va_list x;
if (n == 0)
	return (0);
va_start(x, n);
s = 0;
	for (i = 0; i < n; i++)
		s = va_arg(x, int) + s;
va_end(x);
return (s);
}
