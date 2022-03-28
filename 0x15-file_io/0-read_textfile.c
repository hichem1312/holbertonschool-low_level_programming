#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file
 * @letters: size of letters
 * Return: the actual number of letters it could read and print
 * */
ssize_t read_textfile(const char *filename, size_t letters)
{
int a, b;
char *buf = malloc(letters);
if (!filename)
	return (0);
a = open(filename, O_RDONLY);
if (a == -1)
	return (0);
b = read(a, buf, letters);
write(STDOUT_FILENO, buf, b);
close(a);
return (b);
}
