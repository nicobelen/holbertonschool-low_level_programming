#include "main.h"

/**
* _strcmp - code
* @s1: pointer
* @s2: pointer
* Return: res
*/
int _strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
	{
        s1++;
		s2++;
	}
	return (*s1 - *s2);
}
