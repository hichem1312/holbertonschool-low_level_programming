#include "main.h"
#include <string.h>
/**
 * reverse_array - writes the character c to stdout
 * @a:poin
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i >= 0; i--)
{
if (i != n - 1)
printf(", ");
printf("%d", a[i]);
}
printf("\n");
}
