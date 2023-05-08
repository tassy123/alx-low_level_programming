#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* read_textfile - Reads a text file and prints it
* to POSIX standard output.
* @filename: A pointer to the name of the file.
* @letters: The number of letters the
*function should read and print.
* Return: If the function fails or filename is NULL - 0.
*O/w - the actual number of bytes the function can read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t f, p, t;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
f = open(filename, O_RDONLY);
p = read(f, buffer, letters);
t = write(STDOUT_FILENO, buffer, p);
if (f == -1 || p == -1 || t == -1 || t != p)
{
free(buffer);
return (0);
}
free(buffer);
close(f);
return (t);
}
