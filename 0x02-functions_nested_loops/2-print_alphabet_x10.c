#include "main.h"
/**
* print_alphabet_x10 - check the code.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	    char ch;
	    int i;
	    int n = 10;

	for (i = 0; i < n; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

	_putchar('\n');
	}
}
