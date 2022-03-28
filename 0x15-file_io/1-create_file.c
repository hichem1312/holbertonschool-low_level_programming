#include "main.h"

/**
 * create_file- function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int n;
if (!filename)
	return (-1);
n = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (n == -1)
	return (-1);
if (text_content)
	write(n, text_content, strlen(text_content));
close(n);
return (1);
}
