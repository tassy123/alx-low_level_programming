#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: first dimension
* @height: second dimension
* Return: empty
*/

int **alloc_grid(int width, int height)
{
int tex;
int o, p;
if (height <= 0 || width <= 0)
return (NULL);
tex = malloc(sizeof(int *) * height);
if (tex == NULL)
return (NULL);
for (o = 0; o < height; o++)
{
tex[o] = malloc(sizeof(int) * width);
if (tex[o] == NULL)
{
for (; o >= 0; o--)
free(tex[o]);
free(tex);
return (NULL);
}
}
for (o = 0; o < height; o++)
{
for (p = 0; p < width; p++)
tex[o][p] = 0;
}
return (tex);
}
