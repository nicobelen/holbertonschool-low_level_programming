#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - check code
* @nmemb: parameter
* @size: parameter
* Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (unsigned int *)calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
