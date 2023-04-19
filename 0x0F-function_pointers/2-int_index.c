#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array of integer
* @size: size of integer
* @cmp: pointer of the integer
* Return: always 0 (success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int p;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (p = 0; p < size; p++)
{
if (cmp(array[p]))
return (p);
}
return (-1);
}
