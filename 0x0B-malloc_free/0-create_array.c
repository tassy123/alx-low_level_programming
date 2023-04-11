#include "main.h"
#include <stdlib>

/**
* create_array - creates an array of chars
* and initializes it with a specific char.
* @c: char to assing
* @size: size of array
* Return: pointer to array,NULL if fail
*/

char *create_array(unsigned int size, char c)
{
char *std;
unsigned int g;
std = malloc(sizeof(char) * size);
if (size == 0 || std == NULl)
return (NULL);
for (g = 0; g < size; g++)
std[g] = c;
return (std);
}
