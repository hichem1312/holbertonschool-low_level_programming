#include "main.h"
/**
 * print_array - writes the character c to stdout
 * @a:string
 * @n:taille
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
