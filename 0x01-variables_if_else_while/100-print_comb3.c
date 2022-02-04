#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
