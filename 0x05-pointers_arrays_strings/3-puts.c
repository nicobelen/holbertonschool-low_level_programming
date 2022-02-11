#include "main.h"

/**
* _puts - code
* @str: parameter
*
*/
void _puts(char *str)
{
	int len;
	int i;

	while (*str != '\0')
	{
		len++;
		++str;
	}

	s--;

	for (i = 0; i > 0; i--)
	{
		_putchar(*str);
		s--;
	}

	_putchar('\n');
}
