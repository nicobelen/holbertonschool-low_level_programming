#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	else if (lastdigit == 0)
	printf("Last digit of %d is %d and is 0", n, lastdigit);
	else
	printf("Last digit of %d is %d and is less than 6 but not 0", n, lastdigit);
	return (0);
}
