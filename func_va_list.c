#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_c - check code
 * @arg: value
 * Return: 1
 */

int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));
		return (1);
}


/**
 * print_s - check code
 * @arg: value
 * Return: i
 */


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

/**
 * print_d - check code
 * @arg: value
 * Return: 1
 */


int print_d(va_list arg)
	{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(arg, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_i - check code
 * @arg: value
 * Return: 1
 */


int print_i(va_list arg)
{
	int a[10];
	int j, m = 1000000000, n, sum, count = 0;

	n = va_arg(arg, int);
	a[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			a[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_pct - check code
 * @arg: value
 * Return: (write(1, "%", 1
 */

int print_pct(va_list arg)
{
	(void)arg;
	return (write(1, "%", 1));
}
