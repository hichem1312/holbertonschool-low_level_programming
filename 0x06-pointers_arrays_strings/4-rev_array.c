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
int i, s, x;
s = 0;
for (i = n - 1; i >= n / 2; i--)
{
if (i > s)
{
x = a[i];
a[i] = a[s];
a[s] = x;
}
else if (s < i)
{
x = a[s];
a[s] = a[i];
a[i] = x;
}
s++;
}
}
