#include "main.h"
/**
* times_table - code
*
*
*
*/
void times_table(void)
{
	int i, j, sum, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			l = sum % 10;
			k = (sum / 10) % 10;

			if (((i == 0) && (j == 0)) || ((i != 0) && (j == 0)))
			{
				_putchar(k + '0');
			}
			else if (sum <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
