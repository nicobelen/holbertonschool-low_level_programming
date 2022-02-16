#include "main.h"

/**
*
*
*
*
*/
char *leet(char *s)
{
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}
	return (s);
}
