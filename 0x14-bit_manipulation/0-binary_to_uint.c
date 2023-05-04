#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary number to an
* unsigned int
* @b: number to convert
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int s = 0;
int p = 0;
if (b == NULL)
return (0);
while (b[p] == '0' || b[p] == '1')
{  /* Found another digit. */
s <<= 1;
s += b[p] - '0';
p++;
}
return (s);
}
