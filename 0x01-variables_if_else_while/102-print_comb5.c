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
if ((a < c) || ((a == c) && (b < d)))
{
if (!(d == '1' && c == '0'))
{
putchar(',');
putchar(' ');
}
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
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
