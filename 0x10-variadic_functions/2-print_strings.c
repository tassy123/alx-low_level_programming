#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - prints strings, followed by a new line
* @separator: string to be sperated
* @n: nums of strings passed
* @...: variable nums of strings
* Description: If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int opi;
va_start(strings, n);
for (opi = 0; opi < n; opi++)
{
str = va_arg(strings, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (opi != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
