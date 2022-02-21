#include "main.h"
#include <string.h>
/**
 * print_diagsums - copy tow strings
 * @a:string
 * @size:string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2, j;
i = 0;
j = size - 1;
s1 = 0;
s2 = 0;
	while (i < (size * size))
	{
		s1 = s1 + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		s2 = s2 + a[j];
		j = j + size - 1;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
