#include "search_algos.h"

/**
 * linear_search - searching algorithm to find value
 * @array: arrays to search in
 * @size: size of the array
 * @value: value to search for
 * Return: values checked, if the value is found and it's index
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		index = i;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			break;
		}
		index = -1;
	}
	return (index);
}
