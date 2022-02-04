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
char ch, n, chm;
ch = 'a';
while (ch <= 'z')
{
putchar (ch);
ch++;
}
chm = 'A';
while (chm <= 'Z')
{
putchar (chm);
chm++;
}
n = '\n';
putchar (n);
return (0);
}
