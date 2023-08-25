#include "main.h"

/**
* _strstr - function that locates a substring.
* @haystack: input
* @needle: input
* Return: always 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *m = haystack;
char *o = needle;
while (*m == *o && *o != '\0')
{
m++;
o++;
}
if (*o == '\0')
return (haystack);
}
return (0);
}
