#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: input
* @av: input
* Return: always 0 (success)
*/

char *argstostr(int ac, char **av)
{
int z, x, c = 0, v = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (z = 0; z < ac; z++)
{
for (x = 0; av[z][x]; x++)
v++;
}
v += ac;
str = malloc(sizeof(char) * v + 1);
if (str == NULL)
return (NULL);
for (z = 0; z < ac; z++)
{
for (x = 0; av[z][x]; x++)
{
str[c] = av[z][x];
c++;
}
if (str[c] == '\0')
{
str[c++] = '\n';
}
}
return (str);
}
