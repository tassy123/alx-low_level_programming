#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of members
* @size: size
* Return: empty
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int g = 0, h =0;
char *j;
if (nmemb == 0 || size == 0)
return (NULL);
h = nmemb * size;
j = malloc(h);
if (j == NULL)
return (NULL);
while (g < h)
{
j[g] = 0;
g++;
}
return (j);
}
