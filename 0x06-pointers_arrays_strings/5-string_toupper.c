#include "main.h"

/**
* string_toupper - changes all lowercase letters
* of a string to uppercase
* @str: The string to be changed
* Return: str
*/

char *string_toupper(char *str)
{
int index;
index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] = str[index] - 32;
index++;
}
return (str);
}
