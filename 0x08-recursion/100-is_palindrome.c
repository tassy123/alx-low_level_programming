#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: string to reverse
* Return: The length of a string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
* comparator - compares each character of the string
* @s: string to check
* @a: smallest iterate  number
* @b: largest iterate number
* Return: nothing
*/
int comparator(char *s, int a, int b)
{
if (*(s + a) == *(s + b))
{
if (a == b || a == b + 1)
return (1);
return (0 + comparator(s, a + 1, b - 1));
}
return (0);
}

/**
* is_palindrome - check if a sting is palindrome
* @s: string to reverse
* Return: 1 if it is, 0 if not
*/

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
