#include "main.h"
/**
 * _calloc - Entry point
 *@nmamb:unsingedint
 *@size:size
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ch;

if (nmemb == 0 || size == 0)
	return(NULL);
ch = malloc(size * nmemb);
if (!ch)
	return(NULL);
for (i = 0; i < (size * nmemb); i++)
	ch[i] = 0;
return(ch);
}
