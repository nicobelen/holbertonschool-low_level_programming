#include "main.h"

/**
* _pow_recursion - check code
* @x: parameter
* @y: parameter
* Return: 1
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	return (1);
}
