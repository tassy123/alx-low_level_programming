#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* init_dog - variables of dog structure
* @g: dog to initialise
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: empty
*/

void init_dog(struct dog *g, char *name, float age, char *owner)
{
if (g != NULL)
{
g->name = name;
g->age = age;
g->owner = owner;
}
}
