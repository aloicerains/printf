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
	char i;

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
	char *nil = "(null)";

	s = va_arg(ap, char*);
	if (s == NULL)
	{
		while (*nil != '\0')
		{
			_putchar(*nil);
			++nil;
		}
	}
	while (s != NULL && *s != '\0')
	{
		_putchar(*s);
		++s;
		len++;
	}

	return (len);
}

