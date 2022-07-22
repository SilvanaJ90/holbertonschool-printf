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
} print_a;

int _putchar(char c);
int _printf(const char *format, ...);
int aux_func(const char *format, va_list args, print_a *a);
int print_c(va_list arg);
int print_s(va_list arg);
int print_pct(va_list arg);
int print_d(va_list arg);
int print_i(va_list arg);
int print_b(va_list arg);
int print_u(va_list arg);
int print_o(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_S(va_list arg);
int print_p(va_list arg);

#endif /* MAIN_H */
