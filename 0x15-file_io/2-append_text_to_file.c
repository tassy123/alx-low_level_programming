#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
* Return: If the function fails or filename is NULL, return -1.
*If the file does not exist the user lacks write permissions, return -1.
*Otherwise, return 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int h, i, k = 0;

if (!filename)
return (-1);

if (text_content)
{
while (text_content[k])
k++;
}

h = open(filename, O_WRONLY | O_APPEND);
if (h == -1)
return (-1);

i = write(h, text_content, k);
if (i == -1)
{
close(h);
return (-1);
}

close(h);
return (1);
}
