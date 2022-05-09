#include "main.h"

/**
* _strchr - strchr function
* @s: pointer
* @c: parameter
* Return: 0
*/
char *_strchr(char *s, char c)
{
	do

	{
		if (*s == c)
		{
			return (s);
		}
	}

	while (*s++);
	{
	}

	return (0);
}
