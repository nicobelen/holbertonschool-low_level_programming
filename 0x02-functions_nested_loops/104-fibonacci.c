#include <stdio.h>

/**
* main - firs 100 fibonacci numbers
* Return: Always 0
*
*/
int main(void)
{
	int i;
	unsigned long int n1 = 0, n2 = 1, n3;

	for (i = 0; i < 100; i++)
	{
		n3 = n1 + n2;

		printf("%ld", n3);

		n1 = n2;
		n2 = n3;

		if (i == 99)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
