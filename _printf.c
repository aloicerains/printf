/**
 * _printf - counts the number of character and string
 * @format: Format argument
 *
 * Return: number of characters printed
 */
#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
int _printf(const char *format, ...)
{
	int len = 0;
	int i, k = 0;
	form sp[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"%", print_p},
		{"u", print_u},
		{"o", print_o},
		{"b", print_b},
		{NULL, NULL}
	};
	va_list ap;
	const char *fptr = NULL;
	va_start(ap, format);
	fptr = format;
	while (fptr != NULL && fptr[k] != '\0')
	{
		if (fptr[k] != '%')
		{
			_putchar(fptr[k]);
			len++;
		}
		if (fptr[k] == '%')
		{
			i = 0;
			k = k + 1;
			while (sp[i].spec != NULL && fptr[k] != '\0')
			{
				if (fptr[k] == *(sp[i].spec))
				{
					len += (sp[i].f)(ap);
					break;
				}
				i++;
			}
			if (!sp[i].spec)
			{
				len += (sp[4].f)(ap);
				_putchar(fptr[k]);
				len++;
			}
			
		}
		if (fptr[k] == '\0')
			break;
	
	k++;
	}
	if (fptr == NULL)
		len = -1;
va_end(ap);
return (len);
}
