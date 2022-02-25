#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - check code
* @argc: print number of arguments
* @argv: unused attribute
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
