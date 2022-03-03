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
	char *s, *ch = "";
	unsigned int t2, t1, i, j;
	if (s1 == NULL)
	{
		s1 = ch;
		t1 = 0;
	}
	else
		t1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = ch;
		t2 = 0;
	}
	else
		 t2 = strlen(s2);
	if (n >= t2)
		s = malloc(t1 + t2 + 1);
	else
		s = malloc(t1 + n + 1);
	if (!s)
		return(NULL);
	for (i = 0; i < t1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return(s);
}
