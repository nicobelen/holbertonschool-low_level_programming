#include "main.h"

/**
* _strcat - code
* @dest: pointer
* @src: pointer
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);
}
