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

	if (can->name == NULL)
	{
		free(can);
		return (NULL);
	}
	if (can->owner == NULL)
	{
		free(can->name);
		free(can);
		return (NULL);
	}
	can->name = name;
	can->age = age;
	can->owner = owner;
	return (can);
}
