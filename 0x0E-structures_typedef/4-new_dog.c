#include <stdlib.h>
#include "dog.h"

int _strlen(char *d);
char *_strcpy(char *dest, char *src);
/**
* new_dog: copy to store
* @name: name of dog
* age: age of dog
* @owner: owner of dog
* Return: empty
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *cyp_dog;
int name_j = 0, own_j = 0;
if (name != NULL && owner != NULL)
{
name_j = _strlen(name) + 1;
own_j = _strlen(owner) + 1;
cyp_dog = malloc(sizeof(dog_t));
if (cyp_dog == NULL)
return (NULL);
cyp_dog->name = malloc(sizeof(char) * name_j);
if (cyp_dog->name == NULL)
{
free(cyp_dog);
return (NULL);
}
cyp_dog->owner = malloc(sizeof(char) * own_j);
if (cyp_dog->owner == NULL)
{
free(cyp_dog->name);
free(cyp_dog);
return (NULL);
}
cyp_dog->name = _strcpy(cyp_dog->name, name);
cyp_dog->owner = _strcpy(cyp_dog->owner, owner);
cyp_dog->age = age;
}
return (cyp_dog);
}
/**
* _strlen: length of string
* @s: string to return
* Return: string length
*/
int _strlen(char *s)
{
int k = 0;
for (; *s != '\0'; s++)
{
k++;
}
return (k);
}
/**
* _strcpy - copy a string
* @dest: destintion value
* @src: source value
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int l;
for (l = 0; src[l] != '\0'; l++)
{
dest[l] = src[l];
}
dest[l++] = '\0';
return (dest);
}
