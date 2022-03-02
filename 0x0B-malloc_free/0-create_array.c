#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that creates an array of chars, and initializes
* it with a specific char
* @size: unsigned int
* @c: char
* Return: str
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(char) * size);

		if (str == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			str[i] = c;
	}

	return (str);

}
