#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 *@width:int
 *@height:int
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
int i, j, k, x;
int **p;
p =  malloc(sizeof(int *) * height);
if (p == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
	p[i] = malloc(sizeof(int) * width);
	if (p[i] == NULL)
	{
		for (x = i; x <= 0; x--)
			free(p[x]);
		free(p);
		return (NULL);
	}
}
if (width <= 0)
        return (NULL);
if (height <= 0)
        return (NULL);
for (j = 0; j < height; j++)
{
	for (k = 0; k < width; k++)
		p[j][k] = 0;
}
return (p);
}
