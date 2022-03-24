#include "main.h"

/**
* countbits - recursive counter function
* @n: int n
* Return: counter
*/
int countbits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}

	return (count);
}
/**
* flip_bits - return number of bits to be flipped
* @n: first number
* @m: second number
* Return: result of countbits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == 0 || m == 0)
		return (0);
	else
		return (countbits(n ^ m));
}