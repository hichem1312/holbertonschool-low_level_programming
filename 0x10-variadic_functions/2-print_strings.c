#include "variadic_functions.h"

/**
 * print_strings - p
 * @n: int
 * @separator: char
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list x;
char *d;
i = 0;
if (n == 0)
{
	printf("\n");
	exit(0);
}
va_start(x, n);
for (i = 0; i < n; i++)
{
	d = va_arg(x, char*);
	if (d == NULL)
		printf("(nil)");
	else
	printf("%s", d);
	if (i == n - 1)
		printf("\n");
	else if (separator != NULL)
		printf("%s", separator);
}
va_end(x);
}
