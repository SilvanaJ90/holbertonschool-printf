#include "main.h"
#include <unistd.h>
/**
 * aux_func - check code
 * @format: pointer
 * @va_list arg: va list
 * print_a: typedef
 */

int aux_func(const char *format, va_list arg, print_a *a)
{
	int v = 0, m, size = 0, test = 0;

	while (format && format[v])
	{
		if (format[v] == '%')
		{
			m = 0;
			while (a[m].j != NULL)
			{
				if (format[v + 1] == '%')
				{
					write(1, &format[v], 1);
					size++;
					v++;
					test = 1;
					break;
				}
				else if (a[m].j[0] == format[v + 1])
				{
					size += a[m].k(arg);
					v++;
					test = 1;
					break;
				}
				m++;
			}
			if (test == 0)
			{
				write(1, &format[v], 1);
				size++;
			}
		}
		else
		{
			write(1, &format[v], 1);
			size++;
		}
		v++;
	}
	return (size);
}
