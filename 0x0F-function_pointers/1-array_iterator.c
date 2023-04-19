#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* on each element of an array
* @array: array of param
* @size: size of param
* @action: pointer to print
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int w;
if (action == NULL || array == NULL)
return;
for (w = 0; w < size; w++)
{
action(array[w]);
}
}
