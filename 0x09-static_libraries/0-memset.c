#include "main.h"

/**
* _memset - fill a block of memory with a specific value
* @x: starting address of memory to be filled
* @y: the desired value
* @n: number of bytes to be changed
* Return: changed array with new values for n bytes
*/

char *_memset(char *x, char y, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
x[a] = y;
n--;
}
return (x);
}
