#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check code
* @argc: print all arguments
* @argv: print all arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
