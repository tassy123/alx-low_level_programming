#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* and initializes it with a specific char.
* @c: char to assing
* @size: size of array
* Return: pointer to array,NULL if fail
*/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int g;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (g = 0; g < size; g++)
str[g] = c;
return (str);
}
