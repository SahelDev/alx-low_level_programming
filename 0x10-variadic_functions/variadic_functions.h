#ifndef _VARIADIC_H
#define _VARIADIC_H
#include<stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct check
{
	char *chk;
	void (*f)(va_list list);
} check_t;

















#endif
