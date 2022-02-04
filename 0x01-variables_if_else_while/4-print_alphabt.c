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
char ch, n;
ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
}
else
{
putchar (ch);
ch++;
}
}
n = '\n';
putchar (n);
return (0);
}
