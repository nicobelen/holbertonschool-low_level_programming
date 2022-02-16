#include "main.h"

/**
* _strcmp - code
* @s1: pointer
* @s2: pointer
* Return: res
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
    int res;

    res = *s1 - *s2;

    while (s1[i] == s2[i] && s1[i] != '\0')
	{
        i++;

		if (s1[i] < s2[i])
			return (res);

		else if (s1[i] > s2[i])
			return (res);

		else
			return (0);
	}
	return (res);
}
