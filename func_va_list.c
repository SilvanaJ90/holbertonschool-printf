#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));
		return(1);
}

int print_s(va_list arg)
{
	int i;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

int print_d(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

int print_i(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}


int print_pct(va_list arg)
{
	(void)arg;
	return (write(1, "%", 1));
}
