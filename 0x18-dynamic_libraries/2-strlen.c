#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string whose length is to be found
* Return: returns the length of the @s
*/

int _strlen(char *s)
{
int longi = 0;

while (s[longi] != '\0')
longi++;

return (longi);
}
