#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that adds positive numbers
* @argc: argc
* @argv: argv
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
