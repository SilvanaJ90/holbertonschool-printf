#include "main.h"

/**
 * get_funct -check code
 * format: point
 * Return: pointer the function
 */

int (*get_print_func(const char *format))(va_list)
{
	int i;
	print_t op[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	for (i = 0; op[i].j; i++)
	{
		if (*format == *(op[i].j))
		{
			return (op[i].k);
		}
	}
	return (NULL);
}
