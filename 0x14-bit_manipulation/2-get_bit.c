#include "main.h"

/**
*
*
*
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	if (bit != 0 && bit != 1)
		return (-1);

	return (bit);
}
