#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, nb, nb1, s, i;
nb = 0;
nb1 = 1;
for (i = 0; i < n; i++)
{
if (i <= 1)
s = i;
else
{
s = nb + nb1;
nb = nb1;
nb1 = s;
}
printf("%d\n", s);
}
return (0);
}
