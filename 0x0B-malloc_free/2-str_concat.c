#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
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
i = ci = 0;
while (s1[i] != '\0')
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
