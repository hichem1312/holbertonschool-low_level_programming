#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;
a = '0';
while (a <= '9')
{
b = '0';
while (b <= '9')
{
c = '0';
while (c <= '9')
{
d = '0';
while (d <= '9')
{
if ((a < c) || ((a == c) &&(b < d)))
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a + b + c + d != 227 || a != '9')
{
putchar(',');
putchar(' ');
}
}
d++;
}
c++;
}
b++;
}
a++;
}
putchar ('\n');
return (0);
}
