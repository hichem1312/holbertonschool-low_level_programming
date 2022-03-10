#include "variadic_functions.h"

/**
 * print_numbers - p
 * @n: int
 * @separator: char
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list x;
int d;
i = 0;
if (n == 0)
{
	printf("\n");
	exit(0);
}
va_start(x,n);
for (i = 0; i < n; i++)
{
	d = va_arg(x, int);
	printf("%d", d);
	if (i == n - 1)
		printf("\n");
	else if (separator != NULL)
		printf("%s", separator);
}
va_end (x);
}
