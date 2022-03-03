#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - check code
* @width: parameter
* @height: parameter
* Return: array
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; a--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
