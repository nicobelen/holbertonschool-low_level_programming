#include "dog.h"

/**
* _strlen - length of a string
* @p: pointer
* Return: i
*/
int _strlen(char *p)
{
	int i;

	while (p[i])
		i++;

	return (i);
}

/**
* new_dog - new dog
* @name: data
* @age: data
* @owner: data
* Return: can
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen = _strlen(name) + 1;
	int ownerlen = _strlen(owner) + 1;
	int  i;

	if (name && owner)
	{
		dog_t *can;
		can = malloc(sizeof(dog_t));

		if (can == NULL)
			return (NULL);

		can->age = age;

		can->name = malloc(sizeof(char) * namelen);

		if (can->name == NULL)
		{
			free(can);
			return (NULL);
		}

		for (i = 0; i < namelen; i++)
			can->name[i] = name[i];

		can->owner = malloc(sizeof(char) * ownerlen);

		if (can->owner == NULL)
		{
			free(can->name);
			free(can);
			return (NULL);
		}

		for (i = 0; i < ownerlen; i++)
			can->owner[i] = owner[i];

		return (can);
	}
	return (NULL);
}
