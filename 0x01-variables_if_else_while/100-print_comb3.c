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
int a, b, x;
a = '0';
x = '0';
while (a != '9')
{
b = x;
while (b <= '9')
{
if (a != b)
{
putchar(a);
putchar(b);
if (a + b != 113)
{
putchar(',');
putchar(' ');
}
}
b++;
}
x++;
a++;
}
putchar ('\n');
return (0);
}
