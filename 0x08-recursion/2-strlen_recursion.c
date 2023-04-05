#include "main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: The string to return
* Return: the value
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (*s);
}
s++;
return (_strlen_recursion(s) + 1);
}
