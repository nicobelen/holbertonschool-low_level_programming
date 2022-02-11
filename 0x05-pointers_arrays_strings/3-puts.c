#include "main.h"

/**
* _puts - code
* @str: parameter
*
*/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
