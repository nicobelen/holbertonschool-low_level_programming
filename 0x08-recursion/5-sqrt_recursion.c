#include "main.h"

/**
* square_root - check code
* @n: parameter
* @root: parameter
* Return: 0
*/
int square_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (square_root(n, root + 1));
}
/**
* _sqrt_recursion - check code
* @n:parameter
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(n, 0));
}
