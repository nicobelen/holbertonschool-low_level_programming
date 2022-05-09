#include "main.h"

/**
* _memcpy - memcpy function
* @dest: pointer
* @src: pointer
* @n: parameter
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
