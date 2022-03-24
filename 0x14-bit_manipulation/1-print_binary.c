#include "main.h"

/**
* print_binary - convert binary to unsigned int
* @n: number to print as binary
* Return: converted number
*/
void print_binary(unsigned long int n)
{
    unsigned long int j, k, andmask;
    unsigned long int i;

    for (i = n; i >= 0; i--)
	{
		j = i;
		andmask = 1<<j;
		k = n&andmask;

		k == 0 ? _putchar('0') : _putchar('1');
	}
}
