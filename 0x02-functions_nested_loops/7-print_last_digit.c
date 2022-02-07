#include "main.h"
/**
* print_last_digit - check code
* @i: parametro
* Return: devolucion
*
*/

int print_last_digit(int i)
{
	int ld;

	ld = i % 10;

	if (ld < 0)
		ld *= -1;

	_putchar('0' + ld);

	return (ld);
}
