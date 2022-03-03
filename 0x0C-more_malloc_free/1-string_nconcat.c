#include "main.h"
/**
 * string_nconcat - Entry point
 *@s1:char
 *@s2:char
 *@n:integer
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int t2 = strlen(s2), t1 = strlen(s1), i, j;
	if (n >= t2)
		s = malloc(t1 + t2);
	else
		s = malloc(t1 + n);
	if (!s)
		return(NULL);
	for (i = 0; i < t1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i+1] = '\0';
	return(s);
}
