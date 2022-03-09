#include "3-calc.h"

/**
* main - performs simple operations
* @argc: counter
* @argv: vector
* Return: no error
*/
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != 37 && argv[2][0] != 47 && argv[2][0] != 43 && 
		argv[2][0] != 45 && argv[2][0] != 42) || argv[2][1] != '\0')
	{
		prrintf("Error\n";
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}