#ifndef _HEADER_
#define _HEADER_

/**
* struct dog - variables of dogs
* @d: value of struct to initialise
* @name: name to initialise
* @age: age to initialise
* @owner: owner to initialise
*/

struct dog
{
char *name;
float age;
char *owner;
struct dog *d;
};

/**
* dog_t - typedef for dog structure
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
