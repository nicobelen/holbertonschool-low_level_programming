#include <stdio.h>

/**
* main - code
* Return: Always 0
*
*/
int main(void)
{
	int i, n = 1024;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == n && i % 5 == n)
		{
			putchar(i);
			putchar(' ');
		}
	}

	return (0);
}
