#include "main.h"

/**
* cap_string - code
* @s: pointer
* Return: s
*
*/
char *cap_string(char *s)
{
	int i = 0;
	int next = 0;

	while (*(s + i) != '\0')
	{
	if (
	(*(s + i - 1) == ' ') || (*(s + i - 1) == '\t') ||
	(*(s + i - 1) == '\n') || (*(s + i - 1) == ',') ||
	(*(s + i - 1) == ';') || (*(s + i - 1) == '.') ||
	(*(s + i - 1) == '!') || (*(s + i - 1) == '?') ||
	(*(s + i - 1) == '"') || (*(s + i - 1) == '(') ||
	(*(s + i - 1) == ')') || (*(s + i - 1) == '{') ||
	(*(s + i - 1) == '}') || i == 0)
	{
	next = 1;
	}
	if (next == 1 && *(s + i) >= 97 && *(s + i) <= 122)
	{
	*(s + i) = *(s + i) - 32;
	}
	next = 0;
	i++;
	}
	return (s);
}
