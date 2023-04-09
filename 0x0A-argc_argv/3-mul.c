#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: array size
* @argv: array containing elements
* Return: Always 0 (success)
*/

int main(int argc, char **argv)
{
int nel = argc - 1;
if (nel != 2)
{
puts("Error");
return (1);
}
printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
return (0);
}
