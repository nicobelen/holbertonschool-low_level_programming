#include "main.h"

/**
* print_number - code
* @n: parameter
* Return: void
*/
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{		
		n = -n;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		n = ((n % 10) + '0');
		n /= 10;
		a = n;
		a = ((n % 10) + '0');
		a /= 10;
		_putchar(a);
	}
}
