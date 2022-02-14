#include <stdio.h>

/**
* main - fibonacci
* Return: Always 0
*
*/
int main(void)
{
	int n1 = 1, n2 = 2, n3, i;

	printf("%d, %d\n", n1, n2);

	for (i = 3; i <= 50; i++)
	{
		n3 = n1 + n2;

		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
		
		if (i == 50)
			printf("%d", n3);
	}
	return (0);
}
