#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - code
* @s: parameter
* Return: something
*/
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }

    return (len);
}

/**
*
*
*
*
*/
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int len, i, str1, str2;

	if (s1 == NULL)
		return (NULL);
	
	if (s2 == NULL)
		return (NULL);
	
	str1 = _strlen(s1);
	str2 = _strlen(s2);
	len = str1 + str2 + 1;

	ret = malloc(sizeof(char) * len);

	for (i = 0; i < str1; i++)
	{
		ret[i] = s1[i];
	}

	for (i = 0; i < str2; i++)
	{
		ret[i + str1] = s2[i];
	}

	ret[i] = '\0';

	return (ret);
}
