#define MACRO __FILE__
#include <stdio.h>
#include <stdlib.h>

/**
* main - macro filename
* Return: 0
*
*/
int main(void)
{
	printf(MACRO"\n");

	return (0);
}
