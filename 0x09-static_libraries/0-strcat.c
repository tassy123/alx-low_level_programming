#include "main.h"

/**
* _strcat - contain two strings
* @dst: input value
* @src: input value
* Return: void
*/

char *_strcat(char *dst, char *src)
{
int d;
int e;
d = 0;
while (dst[d] != '\0')
{
d++;
}
e = 0;
while (src[e] != '\0')
{
dst[d] = src[e];
d++;
e++;
}
dst[d] = '\0';
return (dst);
}
