#include "main.h"

/**
* main -  Determines if a given character is an alphabetic character.
* Return: Always 0.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return 1;
}
return 0;
}
