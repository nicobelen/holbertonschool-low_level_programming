#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - function to print a name
* @name: pointer
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
