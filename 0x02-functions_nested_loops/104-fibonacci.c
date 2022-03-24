#include <stdio.h>

/**
* main - firs 100 fibonacci numbers
* Return: Always 0
*
*/
int main(void)
{
	int i;
	unsigned long int n1 = 1, n2 = 2, n3;

	for (i = 1; i <= 100; i++)
	{
		n3 = n1 + n2;

		printf("%ld", n3);

		n1 = n2;
		n2 = n3;

		if (i == 100)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
