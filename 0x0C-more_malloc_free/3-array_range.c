#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - check code
* @min: parameter
* @max: parameter
* Return: ptr
*/
int *array_range(int min, int max)
{
	int i, *ptr, tmp = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[tmp++] = i;
	}

	return (ptr);

}
