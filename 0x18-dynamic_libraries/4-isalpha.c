#include "main.h"
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
