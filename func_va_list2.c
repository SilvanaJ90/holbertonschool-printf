#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_b - check code
 * @arg: value
 * Return: count
 */

int print_b(va_list arg)
{
	unsigned int n, buff[1024];
	int i, len = 0;
	char p;

	n = va_arg(arg, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buff[len] = n % 2;
		n /= 2;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = buff[i] + '0';
		write(1, &p, 1);
	}
	return (len);
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
	unsigned int n, buff[1024];
	int i = 0, len = 0;
	char p;

	n = va_arg(arg, int);
	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n > 0)
	{
		buff[len] = n % 16;
		n /= 16;
		if (buff[len] > 9)
			buff[i] = buff[len] + 39;
		else
			buff[i] = buff[len];
		i++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		p = buff[i] + '0';
		write(1, &p, 1);
	}
	return (len);
}

/**
 * print_X - check code
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
