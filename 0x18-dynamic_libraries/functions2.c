#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strcat - code
* @dest: pointer
* @src: pointer
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);
}
/**
* _strncat - code
* @dest: pointer
* @src: pointer
* @n: parameter
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != src[n]; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);
}
/**
* _strcmp - code
* @s1: pointer
* @s2: pointer
* Return: res
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
/**
* _memset - memset function
* @s: pointer
* @b: parameter
* @n: parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
* _strncpy - code
* @dest: pointer
* @src: pointer
* @n: parameter
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
