#include "main.h"

/**
* puts2 - code
* @str: parameter
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

		if (str[i] != '\0')
			i++;
	}
	_putchar('\n');
}
