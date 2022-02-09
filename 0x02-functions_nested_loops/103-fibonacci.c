#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, som;
long int s, nb, nb1;
nb = 0;
nb1 = 1;
som = 0;
for (i = 0; i <= 32; i++)
{
if (i >= 1)
{
s = nb + nb1;
nb = nb1;
nb1 = s;
if (s % 2 == 0)
{
som += s;
}
}
}
printf("%d", som);
printf("\n");
return (0);
}
