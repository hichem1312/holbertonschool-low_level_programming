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
int a, b, c;
a = '0';
while (a != '9')
{
b = a+1;
while (b <= '9')
{
c = b+1;
while (c <= '9')
{
if (a != b && a != c && b != c)
{
putchar(a);
putchar(b);
putchar(c);
if (a + b + c != 168)
{
putchar(',');
putchar(' ');
}
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
