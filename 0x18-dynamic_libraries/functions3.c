#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _memcpy - memcpy function
* @dest: pointer
* @src: pointer
* @n: parameter
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
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
/**
* _strspn - prefix substring
* @s: pointer
* @accept: pointer
* Return: k
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					k++;
				}
			}
		}
		else
		{
			return (k);
		}
	}
	return (k);
}
/**
* _strpbrk - Searches a string for any set of bytes
* @s: pointer
* @accept: pointer
* Return: s + i or Null
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
