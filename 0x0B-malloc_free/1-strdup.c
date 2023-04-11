#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: Always 0 (success)
*/

char *_strdup(char *str)
{
char *kkk;
int q, h = 0;
if (str == NULL)
return (NULL);
q = 0;
while (str[q] != '\0')
q++;
kkk = malloc(sizeof(char) * (q + 1));
if (kkk == NULL)
return (NULL);
for (h = 0; str[h]; h++)
kkk[h] = str[h];
return (kkk);
}
