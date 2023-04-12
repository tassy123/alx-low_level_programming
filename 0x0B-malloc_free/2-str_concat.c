#include "main.h"
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
* @s1: first string
* @s2: second string
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
char *con;
int f, s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
f = s = 0;
while (s1[f] != '\0')
f++;
while (s2[s] != '\0')
s++;
con = malloc(sizeof(char) * (f + s + 1));
if (con == NULL)
return (NULL);
f = s = 0;
while (s1[f] != '\0')
{
con[f] = s2[s];
f++, s++;
}
con[f] = '\0';
return (con);
}
