#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_u - check code
 * @arg: value
 * Return: count
 */

int print_b(va_list arg)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(arg, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}

/**
 * print_u - check code
 * @arg: value
 * Return: count
 */

int print_u(va_list arg)
{
	int j = 1;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tem;
	int last = n % 10, digit, exp = 1;

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
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tem = n;

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
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tem = n;

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
			a[j] = a[j] + 7;
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
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tem = n;

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
			a[j] = a[j] + 7;
		_putchar(a[j] + '0');
	}
	free(a);
	return (count);
}
