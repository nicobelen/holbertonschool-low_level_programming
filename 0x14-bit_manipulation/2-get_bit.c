#include "main.h"

/**
* get_bit - return value of a bit at a given index
* @n: number
* @index: position
* Return: value of a bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	if (bit != 0 && bit != 1)
		return (-1);

	return (bit);
}
