#include "main.h"

/**
* _strncat - code
* @dest: pointer
* @src: pointer
* @n: parameter
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{	
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != src[n]; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);	
}
