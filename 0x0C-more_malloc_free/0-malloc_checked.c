#include "main.h"
/**
 * malloc_checked - Entry point
 *@b:integer
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (!s)
	exit(98);
return (s);
}
