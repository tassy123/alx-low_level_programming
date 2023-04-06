#include "main.h"
#include <stdio.h>

int actual_prime(int n, int s);

/**
* is_prime_number - returns 1 if the input integer
* is a prime number, otherwise return 0
* @n; Number to evaluate
* Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
* actual_prime - calculate if a number is prime
* @n: number to evaluate
* @s: iterate number
* Return: 1 if n is prime, 0 if not
*/
int actual_prime(int n, int s)
{
if (s == 1)
return (1);
if (n % s == 0 && s > 0)
return (0);
return (actual_prime(n, s - 1));
}
