#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - prints a name
 * @array: n
 * @size: f
 * @action:function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (!array || !action)
	return;
for (i = 0; i < size; i++)
	action(array[i]);
}
