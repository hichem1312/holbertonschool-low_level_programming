#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, s;
s = 0;
for (x = 0 ; x <= 1024 ; x++)
{
if ((x % 3 == 0) || (x % 5 == 0))
{
s += x;
}
}
printf("%d\n", s);
return (0);
}
