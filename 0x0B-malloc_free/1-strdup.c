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
* _strdup - check code
* @str: pointer
* Return: newstr
*
*/
char *_strdup(char *str)
{
	int len = _strlen(str) + 1;
	char *newstr = malloc(len * sizeof(char));
	int i;

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
