#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nb, nb1, i;
long int s;
nb = 0;
nb1 = 1;
for (i = 0; i <= 50; i++)
{
if (i >= 1)
{
s = nb + nb1;
nb = nb1;
nb1 = s;
printf("%ld", s);
if (i != 50)
{
printf(", ");
}
}
}
return (0);
}
