#include "main.h"
#include <stdio.h>

int _sqrt(int n, int e);

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number to calculate square root of
* Result: resulting square root
*/

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
* _sqrt - calculates natural square root
* @n: number to calculate square root
* @e: iterator
* Return: the natural square root
*/

int _sqrt(int n, int e)
{
int sqrt = e * e;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (e);
return (_sqrt(n, e + 1));
}
