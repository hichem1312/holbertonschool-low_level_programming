#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name
 * @f: function ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
	return;
else 
	f(name);
}
