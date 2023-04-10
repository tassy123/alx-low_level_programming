#include "main.h"

/**
* _strlen - returns the length of a string
* @s: input
* Return: Always 0 (success)
*/

int _strlen(char *s)
{
int longi = 0;

while (s[longi] != '\0')
longi++;

return (longi);
}
