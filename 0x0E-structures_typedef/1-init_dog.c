#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* init_dog - variables of dog structure
* @d: dog to initialise
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: empty
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
return;
exit(1);
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
