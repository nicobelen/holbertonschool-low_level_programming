#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - check code
* @s1: pointer s1
* @s2: pointer s2
* @n: parameter
* Return: ret
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *ret;
        unsigned int len = n, i;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		for (i = 0; s1[i]; i++)
			len++;

		ret = malloc(sizeof(char) * (len + 1));

		if (ret == NULL)
			return (NULL);

		len = 0;

		for (i = 0; s1[i]; i++)
		{
			ret[len++] = s1[i];
		}

		for (i = 0; s2[i] && i < n; i++)
		{
			ret[len++] = s2[i];
		}
	
		ret[len] = '\0';

		return (ret);
}
