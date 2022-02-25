#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check code
* @argc: int argc
* @argv: char argv
* Return: 0
*/
int main(int argc, char *argv[])
{
	int res, i, n1, n2;

	for (i = 0; i < argc; i++)
	{
	}
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		res = (n1 * n2);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
