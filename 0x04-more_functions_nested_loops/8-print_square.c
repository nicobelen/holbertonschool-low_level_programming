#include "main.h"

/**
* print_square - code
* @size: parameter
*
*/

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			if (i == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
