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
	unsigned int t2, t1, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	t1 = strlen(s1);
	t2 = strlen(s2);
	if (n >= t2)
		n = t2;
	s = malloc(t1 + n + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < t1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
