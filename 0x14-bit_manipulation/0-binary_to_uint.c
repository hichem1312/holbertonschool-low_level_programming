#include "main.h"
/**
 * binary_to_uint - converts a binary number to an int
 * @b: is pointing to a string of 0 and 1
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i, sum = 0, s = 1, length;
if (!b)
	return (0);
length = strlen(b);
for (i = length; i > 0; i--)
{
	if (b[i - 1] == 49)
		sum = sum + s;
	else if (b[i - 1] != 48)
		return (0);
	s = s * 2;
}
return (sum);
}
