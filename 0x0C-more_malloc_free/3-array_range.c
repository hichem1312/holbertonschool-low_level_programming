#include "main.h"
/**
 * array_range - Entry point
 *@min:int
 *@max:int
 * Return: Always 0 (Success)
 */
int *array_range(int min, int max)
{
int i;
int *ch;
if (min > max)
	return(NULL);
ch = malloc(sizeof(int) * ((max - min) + 1));
if (!ch)
	return(NULL);
for (i = 0; min <= max; i++)
{
	ch[i] = min;
	min += 1;
}
return (ch);
}
