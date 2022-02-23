#include "main.h"

/**
* prime - check code
* @n: parameter
* @i: parameter
* Return: prime
*/
int prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime(n, i + 1));
}
/**
* is_prime_number - check code
* @n: parameter
* Return: prime
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);

	return (prime(n, i));
}
