#include<stdio.h>
/**
 * main - Entry point
 *
 * return: always 0 (Success)
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
printf ("%d",s);
printf ("/n");
return (0);
}
