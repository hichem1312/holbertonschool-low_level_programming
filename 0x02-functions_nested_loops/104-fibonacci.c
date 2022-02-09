#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int s, nb, nb1;
nb = 0;
nb1 = 1;
for (i = 0; i <= 98; i++)
{
if (i >= 1)
{
s = nb + nb1;
nb = nb1;
nb1 = s;
printf("%ld", s);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
return (0);
}
