#include "main.h"

/**
* MAIN -  Determines if a given character is an alphabetic character.
* Return: 1 if the character is an alphabetic character, 0 otherwise.
*/

int _isalpha(char c)

{
if (c >= 'A' && c <= 'Z' | | c >= 'a' && c <= 'z')
{
return 1;
}
return 0;
}
