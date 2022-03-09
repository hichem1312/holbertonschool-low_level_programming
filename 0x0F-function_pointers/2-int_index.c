#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - prints a name
 * @size: n
 * @array: array
 * @cmp: search
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return(-1);
if (!array || !cmp)
	return (-1);
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
return (-1);
}
