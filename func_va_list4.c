#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * print_R - check code
 * @arg: value
 * Return: len
 */
int print_R(va_list arg)
{
	int i, j, len = 0;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	char *p, *m;

	p = va_arg(arg, char *);
	for (i = 0; p[i] != '\0'; i++)
		len++;
	m = malloc(sizeof(char) * (len + 1));
	if (!m)
		return ('\0');
	for (i = 0; i <= len; i++)
	{
		m[i] = p[i];
	}
	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (m[i] == alpha[j])
			{
				m[i] = rot[j];
				break;
			}
		}
	}
	for (i = 0; m[i] != '\0'; i++)
		write(1, &m[i], 1);
	free(m);
	return (len);
}
