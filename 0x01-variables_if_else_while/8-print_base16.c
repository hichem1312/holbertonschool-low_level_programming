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
char ch;
int i;
i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
ch = 'a';
while (ch <= 'f')
{
putchar (ch);
ch++;
}
putchar ('\n');
return (0);
}
