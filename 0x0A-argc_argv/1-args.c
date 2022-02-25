#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 *@argc:integer
 *@argv:string
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (*argv[0] != '\0')
printf("%d\n", argc - 1);
return (0);
}
