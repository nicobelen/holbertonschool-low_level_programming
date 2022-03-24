#include "main.h"

/**
* binary_to_uint - convert binary to unsigned int
* @b: binary string
* Return: converted binary
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		dec <<= 1;
		dec += b[i] - '0';
		i++;
	}

	return (dec);
}
