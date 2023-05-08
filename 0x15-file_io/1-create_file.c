#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - function that creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a name to write to the file.
* Return: -1 id fails, otherwise, return 1.
*/

int create_file(const char *filename, char *text_content)
{
int s, o, pt = 0;

if (!filename)
return (-1);

if (text_content)
{
while (text_content[pt])
pt++;
}
s = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (s == -1)
return (-1);
o = write(s, text_content, pt);
if (o == -1)
{
close(s);
return (-1);
}

close(s);
return (1);
}
