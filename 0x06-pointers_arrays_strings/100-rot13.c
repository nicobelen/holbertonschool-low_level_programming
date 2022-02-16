#include "main.h"

/**
* rot13 - code
* @s: pointer
* Return: s
*/
char *rot13(char *s)
{
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
