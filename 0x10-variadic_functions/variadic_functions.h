#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
* struct format - struct
* @form: format style
* @f: pointer to the function
*/
typedef struct format
{
  char *format;
  void (*f)(va_list);
} format_t;

void print_char(va_list c);

void print_int(va_list i);

void print_float(va_list f);

void print_string(va_list s);

#endif
