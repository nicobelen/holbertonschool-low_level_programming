#include "dog.h"

/**
* new_dog - new dog
* @name: data
* @age: data
* @owner: data
* Return: can
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *can;

	can = malloc(sizeof(dog_t));
	if (can == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(can);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(can);
		free(name);
		return (NULL);
	}
	can->name = name;
	can->age = age;
	can->owner = owner;
	return (can);
}
