#include "main.h"
#include <stdlib.h>
/**
* free_grid - unction that frees a 2 dimensional grid
* @grid: first dimension
* @height: second dimension
* Return: empty
*/

void free_grid(int **grid, int height)
{
int k = 0;
for (k = 0; k < height; k++)
{
free(grid[k]);
}
free(grid);
}
