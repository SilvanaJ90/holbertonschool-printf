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

/**
 * print_u - check code
 * @arg: value
 * Return: count
 */

int print_u(va_list arg)
{
	int j = 1;
	unsigned int n;
	unsigned int tem;
	int last = n % 10, digit, exp = 1;

	n = va_arg(arg, unsigned int);
	n = n / 10;
	tem = n;

	if (last < 0)
	{
		_putchar('-');
		tem = -tem;
		n = -n;
		last = -last;
		j++;
	}
	if (tem > 0)
	{
		while (tem / 10 != 0)
		{
		exp = exp * 10;
		tem = tem / 10;
		}
		tem = n;
		while (exp > 0)
		{
			digit = tem / exp;
			_putchar(digit + '0');
			tem = tem - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');
	return (j);
}

/**
 * print_o - check code
 * @arg: value
 * Return: count
 */

int print_o(va_list arg)
{
	int *a;
	int j, count;
	unsigned int n;
	unsigned int tem = n;

	n = va_arg(arg, unsigned int);
	count = 0;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	a = malloc(count * sizeof(int));
	for (j = 0; j < count; j++)
	{
		a[j] = tem % 8;
		tem /= 8;
	}
	for (j = count - 1; j >= 0; j--)
	{
			_putchar(a[j] + '0');
	}
	free(a);
	return (count);
}


/**
 * print_x - check code
 * @arg: value
 * Return: count
 */

int print_x(va_list arg)
{
	int *a;
	int j, count;
	unsigned int n;
	unsigned int tem = n;

	n = va_arg(arg, unsigned int);
	count = 0;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	a = malloc(count * sizeof(int));
	for (j = 0; j < count; j++)
	{
		a[j] = tem % 16;
		tem /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (a[j] > 9)
			a[j] = a[i] + 7;
			_putchar(a[j] + '0');
	}
	free(a);
	return (count);
}


/**
 * print_x - check code
 * @arg: value
 * Return: count
 */

int print_X(va_list arg)
{
	int *a;
	int j, count;
	unsigned int n;
	unsigned int tem = n;

	n = va_arg(arg, unsigned int);
	count = 0;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;
	a = malloc(count * sizeof(int));
	for (j = 0; j < count; j++)
	{
		a[j] = tem % 16;
		tem /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (a[j] > 9)
			a[j] = a[i] + 7;
			_putchar(a[j] + '0');
	}
	free(a);
	return (count);
}
