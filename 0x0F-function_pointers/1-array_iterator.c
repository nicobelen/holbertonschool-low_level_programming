#include "function_pointers.h"

/**
* array_iterator - executes a function on each element of the array
* @array: array
* @size: size of array
* @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
