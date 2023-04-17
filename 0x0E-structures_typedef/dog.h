#include <stdio.h>
#include "dog.h"

/**
* is_gone - variables of dogs
* @dog: dog to initialise
* @name: name to initialise
* @age: age to initialise
* @owner: owner to initialise
*/

int is_gone(struct dog *g, char *name, float age, char *owner)
{
if (g == NULL)
g = malloc(sizeof(struct dog));
g->name = name;
g->age = age;
g->owner = owner;
}
