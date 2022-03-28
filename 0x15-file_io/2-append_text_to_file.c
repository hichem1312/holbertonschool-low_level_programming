#include "main.h"

/**
 * append_text_to_file- function that append in the last of the file
 * @filename: the name of the file
 * @text_content: string to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int n;
if (!filename)
	return (-1);
n = open(filename, O_RDWR | O_APPEND);
if (n == -1)
	return (-1);
if (text_content)
	write(n, text_content, strlen(text_content));
close(n);
return (1);
}
