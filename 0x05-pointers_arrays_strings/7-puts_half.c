#include "main.h"

/**
* puts_half - code
* @str: string
* Return: void
*/
void puts_half(char *str)
{
	int i = 0, j;

	while (*str + i)
		i++;

	j = i / 2;

	if (i % 2)
		j += 1;

	while (j < i)
	{
		_putchar(*str + j);
		j++;
	}
	_putchar('\n');
}
