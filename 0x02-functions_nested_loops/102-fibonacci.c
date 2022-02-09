#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nb, nb1, s, i;
nb = 0;
nb1 = 1;
for (i = 0; i < 50; i++)
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
