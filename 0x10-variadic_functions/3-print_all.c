#include "variadic_functions.h"

/**
* print_char - prints a char
* @c: parameter
* Return: void
*/
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
* print_int - prints a integer
* @i: parameter
* Return: void
*/
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
* print_float - prints a float
* @f: parameter
* Return: void
*/
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
* print_string - print string
* @s: string to be printed between strings
* Return: void
*/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
/**
* print_all - print  all function
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ar;
	int i = 0, j = 0;
	char *sep = "";

	format_t format_ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ar, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (format_ops[j].format != NULL)
		{
			if (format_ops[j].format[0] == format[i])
			{
				printf("%s", sep);
				format_ops[j].f(ar);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ar);
}
