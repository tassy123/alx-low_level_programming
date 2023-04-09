#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: array size
* @argv: array containing elements
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
int e = 0;
while (e < argc)
{
puts(argv[e]);
e++;
}
return (0);
}
