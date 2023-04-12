#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
* @s1: first input
* @s2: second input
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *conct;
int f, se;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
f = se = 0;
while (s1[f] != '\0')
f++;
while (s2[se] != '\0')
se++;
conct = malloc(sizeof(char) * (f + se + 1));
if (conct == NULL)
return (NULL);
f = se = 0;
while (s1[f] != '\0')
{
conct[f] = s2[se];
f++, se++;
}
conct[f] = '\0';
return (conct);
}
