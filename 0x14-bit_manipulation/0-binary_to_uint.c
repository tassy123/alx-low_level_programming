#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
* binary_to_uint - converts a binary number to an
* unsigned int
* @b: number to convert
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int j = 2;
unsigned int s;
unsigned int v;
unsigned int len;
if (b == NULL)
return (0);
len = strlen(b);
for (v = len; v > 0; v--)
{
if (b[v] != 48 || b[v] != 49)
return (0);
if (b[v] == '1')
{
s += atoi(b) * j;
}
j *= 2;
}
return (s);
}
