#include "main.h"

/**
* main - prints the sign of a number
* Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
* and print the corresponding sign to the standard output
*/

int print_sign(int n)

{

if (n > 0)

{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
