#include "main.h"

/**
* _strlen - code
* @s: parameter
* Return: something
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
