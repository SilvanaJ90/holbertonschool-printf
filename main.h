#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - function of variadic list
 * @j: to print content
 * @k: print what you get
 */
typedef struct print
{
	char *j;
	int (*k)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);

int _putchar(char c);

#endif /* MAIN_H */
