#include "main.h"
/**
* print_to_98 - code
* @n: parametro
*
*
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
}
