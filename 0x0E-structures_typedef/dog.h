#ifndef _HEADER_
#define _HEADER_

/**
* struct dog - variables of dogs
* @d: dog to initialise
* @name: name to initialise
* @age: age to initialise
* @owner: owner to initialise
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_type - typedef for dog structure
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
