#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: pointer
* @needle: pointer
* Return: needle or '\0'
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}

	return ('\0');
}
