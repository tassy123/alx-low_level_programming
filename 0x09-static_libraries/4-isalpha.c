#include "main.h"

/**
* _isalpha -  Determines if a given character is an alphabetic character.
* @c: character to be determined
* Return: Always 0.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
