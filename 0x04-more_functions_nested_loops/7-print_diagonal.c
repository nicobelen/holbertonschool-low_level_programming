#include "main.h"

/**
* print_diagonal - code
* @n: parameter
*/
void print_diagonal(int n)
{
	int o;
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (o = 0; o < n; o++)
		{
		for (p = o; p > 0; p--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
}
