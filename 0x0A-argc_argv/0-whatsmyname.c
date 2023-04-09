#include <stdio.h>

/**
* main - prints its name, followed by a new line
* @argc: array size
* @argv: array containing elements
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
puts(argv[argc - 1]);
return (0);
}
