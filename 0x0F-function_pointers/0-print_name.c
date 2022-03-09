#include "function_pointers.h"

/**
* print_name - function to print a name
* @name: pointer
* @f: pointer to function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
