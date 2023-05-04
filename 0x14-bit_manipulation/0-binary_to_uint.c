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
unsigned int k = 0;
int j = 0;
if (b == NULL)
return (0);
while (b[j] == '0' || b[j] == '1')
{ /*Found another digit.*/
k <<= 1;
k += b[j] - '0';
j++;
}
return (k);
}
