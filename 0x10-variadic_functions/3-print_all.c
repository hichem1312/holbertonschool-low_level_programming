#include "variadic_functions.h"
/**
 * print_int - pr
 * @x: l
 */
void print_int(va_list x)
{
	printf("%d", va_arg(x, int));
}
/**
 * print_char - pr
 * @x: l
 */
void print_char(va_list x)
{
	printf("%c", va_arg(x, int));
}
/**
 * print_float - pr
 * @x: l
 */
void print_float(va_list x)
{
	printf("%f", va_arg(x, double));
}
/**
 * print_string - pr
 * @x: l
 */
void print_string(va_list x)
{
	char *s;

	s = va_arg(x, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - pr
 * @format: l
 */
void print_all(const char * const format, ...)
{
int i = 0, j;
va_list x;
char *y;
str tab[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
};
va_start(x, format);
y = "";
while ((format != NULL) && (format[i] != '\0'))
{
	j = 0;
	while ((j < 4) && (format[i] != tab[j].ch))
		j++;
	if (format[i] == tab[j].ch)
	{
		printf("%s", y);
		y = ", ";
		tab[j].f(x);
	}
	y = ", ";
	i++;
}
printf("\n");
}
