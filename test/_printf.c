#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - check code
 * @format: character string
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list args;
	int (*f)(va_list); /* funtion temporal */

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != '%'
				&& format[i + 1] != 'd' && format [i + 10] != 'i')
				{
					count += _putchar(format[i]);
					count += _putchar(format[i + 1]);
					i++;
				}
				else
				{
					f = get_print_func(&format[i + 1]);
					count += f(args);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
