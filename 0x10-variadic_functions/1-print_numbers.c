#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between
* @n: numbers of integers
* @...: variables of nums
* Return: empty
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int opi;
va_start(nums, n);
for (opi = 0; opi < n; opi++)
{
printf("%d", va_arg(nums, int));
if (opi != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
