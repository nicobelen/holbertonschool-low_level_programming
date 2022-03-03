#	include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - check code
* @s1: pointer s1
* @s2: pointer s2
* Return: ret
*/
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i, j, str1, str2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;

	ret = malloc(i * sizeof(*s1) + j * sizeof(*s2));

	if (ret == 0)
		return (NULL);

	for (str1 = 0, str2 = 0; str1 < i + j; str1++)
	{
		if (str1 < i)
			ret[str1] = s1[str1];
		else
			ret[str1] = s2[str2++];
	}

	return (ret);
}
