#ifndef HEADER_FILE
#define HEADER_FILE
#include "string.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct st - p
 * @ch: int
 * @f: char
 * Return: void
 */
typedef struct st
{
	char ch;
	void (*f)(va_list x);
} str;
#endif
