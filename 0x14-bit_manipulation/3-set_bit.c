#include "main.h"

/**
* set_bit - return value of a bit at a given index
* @n: number
* @index: position
* Return: 1 if it worked, -1 if an error ocurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	int clearbit = ~(1 << index);
	int mask = *n & clearbit;
	*n = mask | (bit << index);

	if (n == 0)
		return (-1);

	if (index > 31)
		return (-1);

	return (1);
}
