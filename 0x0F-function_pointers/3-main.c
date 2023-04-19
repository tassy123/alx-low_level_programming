#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
* main - print the result of an operation
* @argc: number of argument
* @argv: array of pointer
* Return: always 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int i, k;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
i = atoi(argv[1]);
op = argv[2];
k = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && k == 0) ||
(*op == '%' && k == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(i, k));
return (0);
}
