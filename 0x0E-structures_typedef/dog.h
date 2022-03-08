#ifndef dog_H
#define dog_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct dog - structure
* @name: data
* @age: data
* @owner: data
*/

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
