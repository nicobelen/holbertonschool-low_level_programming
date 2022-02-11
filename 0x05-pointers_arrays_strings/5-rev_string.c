#include "main.h"

/**
* rev_string - code
* _strlen - code
* @s: parameter
* Return: reverse string
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

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char temp;


	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
