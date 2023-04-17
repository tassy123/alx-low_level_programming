#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* print_dog - print all the data of dog
* @g: dog structure
* Return: empty
*/
void print_dog(struct dog *g)
{
if (g != NULL)
{
printf("Name: %s\n", (g->name) ? g->name : "(nil)");
printf("Age: %f\n", (g->age) ? g->age : 0);
printf("Owner: %s\n", (g->owner) ? g->owner : "(nil)");
}
}
