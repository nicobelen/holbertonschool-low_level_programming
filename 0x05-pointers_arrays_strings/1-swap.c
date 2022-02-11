#include "main.h"

/**
* swap_int - code
* @a: parameter
* @: parameter
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
