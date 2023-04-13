#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: input
* @s2: input
* @n: number to cinc
* Return: empty
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int w = 0, e = 0, r = 0, t = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[w])
w++;
while (s2[r])
r++;
if (n >= r)
t = w + r;
else
t = w + n;
str = malloc(sizeof(char) * t + 1);
if (str == NULL)
return (NULL);
r = 0;
while (e < t)
{
if (e <= w)
str[e] = s1[e];
if (e >= w)
{
str[e] = s2[r];
r++;
}
e++;
}
str[e] = '\0';
return (str);
}
