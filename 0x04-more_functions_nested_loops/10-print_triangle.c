#include "main.h"

/**
* print_triangle - code
* @size: parameter
*
*/
void print_triangle(int size)
{
	int x = 0;
	int y = 0;

	for (x = 1; x <= size; x++)
	{
		for (y = x; y < size; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
