#include "main.h"

/**
* print_array - prints content of array
* @a: array
* @n: items on array
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		printf("%d", a[i]);

		if (a[i] <= n - 1)
			printf(", ");
	}
	printf("\n");
}
