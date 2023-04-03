#include "main.h"

/**
* print_chessboard - entry point
* @a: array
* Return: Always 0 (success)
*/

void print_chessboard(char (*a)[8])
{
int e;
int d;
for (e = 0; e < 8; e++)
{
for (d = 0; d < 8; d++)
_putchar(a[e][d]);
_putchar('\n');
}
}
