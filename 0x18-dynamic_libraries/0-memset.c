#include "main.h"

/**
* _memset - memory with a constant byte
* @s: pointed destination
* @b: constant byte
* @n: number of bytes to be changed
* Return: Always 0 (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
