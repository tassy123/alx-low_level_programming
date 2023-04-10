#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the result, followed by a new line
* @argc: number to be printed
* @argv: argument
* Return: always 0 (success)
*/

int main(int argc, char **argv)
{
int a, b;
int add = 0;
int dig;
if (argc < 2)
{
printf("0\n");
return (1);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}
dig = atoi(argv[a]);
add = add + dig;
}
printf("%d\n", add);
return (0);
}
