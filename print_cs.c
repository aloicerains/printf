/**
 * print_c - function prints character
 * @ap: va_list argument
 *
 * Return: string length
 */
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "holberton.h"
int print_c(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, int);
	_putchar(i);
	return (1);
}
/**
 * print_s - function prints string
 * @ap: va_list pointer argument
 *
 * Return: string length
 */
int print_s(va_list ap)
{
	char *s;
	int len = 0;
	int i = 0;

	s = va_arg(ap, char*);
	if (s == NULL)
	{
		s = "(null)";
		len = -1;
	}
	if (s != NULL && s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
			len++;
		}
	}
	return (len);
}

