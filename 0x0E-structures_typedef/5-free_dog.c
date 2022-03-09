#include "dog.h"

/**
* free_dog - free dog
* @d: pointer
*
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
