#include "main.h"
/**
 * _printf - check code
 * @format: pointer
 * Return: lenght
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int lenght = 0;
	print_a a[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_pct},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	lenght = aux_func(format, arg, a);
	va_end(arg);
	return (lenght);
}
