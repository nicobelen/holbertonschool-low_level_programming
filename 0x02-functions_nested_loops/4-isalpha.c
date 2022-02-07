#include "main.h"
#include <ctype.h>
/**
*
* _isalpha - check code
*
* @c: parametro
*
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
