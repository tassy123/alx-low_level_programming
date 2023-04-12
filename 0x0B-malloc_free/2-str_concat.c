#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input and add together for size
* @s1: first concat
* @s2: second concat
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *conct;
int f, er;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
f = er = 0;
while (s1[f] != '\0')
f++;
while (s2[er] != '\0')
er++;
conct = malloc(sizeof(char) * (f + er + 1));
if (conct == NULL)
return (NULL);
f = er = 0;
while (s1[f] != '\0')
{
conct[f] = s1[f];
f++;
}
while (s2[er] != '\0')
{
conct[f] = s2[er];
f++, er++;
}
conct[f] = '\0';
return (conct);
}
