#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'z'; x++)

	{
		x = tolower(x);
		putchar(x);
		printf("\n");
	}
	return (0);
}
