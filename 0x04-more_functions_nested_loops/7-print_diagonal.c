#include "main.h"

/**
* print_diagonal - code
* @n: parameter
*/
void print_diagonal(int n)
{
	int o;
	int p;

	if (n > 0)
	{
		for (o = 0; o <= n; o++)
		{
		for (p = 0; p < o; p++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
