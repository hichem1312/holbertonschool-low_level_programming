#include "main.h"
/**
 * _realloc - Entry point
 *@ptr:piont
 *@old_size:int
 *@new_size:int
 * Return: Always 0 (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ch;
if (new_size > old_size)
{
	ch = malloc(new_size);
	free(ptr);
	return (ch);
}
if (new_size == old_size)
{
	return (ptr);
}
if (ptr == NULL)
{
	ch = malloc(new_size);
	free(ptr);
	return (ch);
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
return (ptr);
}
