#include "search_algos.h"

/**
 * binary_search - searching algorithm to find value
 * @array: arrays to search in
 * @size: size of the array
 * @value: value to search for
 * Return: values checked, if the value is found and it's index
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high, x, i;

	low = 0;
	high = size - 1;
	x = value;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");

		for (i = low; i < high; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[high]);

		if (array[mid] == x)
			return (mid);
		else if (array[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
