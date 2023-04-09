#include <stdio.h>
#include <stdlib.h>

/**
* isNumeric: Print the result, followed by a new line
* @n: number to be printed
* Return: true if number, if not, false
*/

int isNumeric(const char *n)
{
while (*n != '\0')
{
if (*n < '0' || *n > 9)
return (0);
n++;
}
return (1);
}

/**
* main - add positive numbers
* @argc: array size
* @argv: array containing elements
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
int lop = 1, sum = 0;
while (lop < argc)
{
if (isNumeric(argv[lop]) == 0)
{
puts("Error");
return (1);
}
sum = sum + atoi(argv[lop]);
lop++;
}
printf("%d\n", sum);
return (0);
}
