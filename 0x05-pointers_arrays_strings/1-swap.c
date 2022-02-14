#include "main.h"
/**
 * swap_int - writes the character c to stdout
 * @a:at
 * @b:bt
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
