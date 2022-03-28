#include "main.h"
/**
 * print_binary- prints a binary representation of a number
 * @n: int
 * Return: binary representation
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
	print_binary(n >> 1);
}
putchar((n & 1) + '0');
}
