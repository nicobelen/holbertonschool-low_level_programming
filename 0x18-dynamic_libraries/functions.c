#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include <ctype.h>
/**
* _islower - check code
*
* @c: parametro
*
* Return: Always 0
*/

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
		return (0);
}
#include <ctype.h>
/**
* _isalpha - check code
*
* @c: parametro
*
* Return: Always 0
*/

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
		return (0);
}
/**
* _isupper - code
* @c: parameter
* Return: something
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

/**
* _abs - check code
*
* @n: parametro
*
* Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
