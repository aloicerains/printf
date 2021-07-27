/**
 * print_i - function prints the integers
 * @ap: argument pointer of va_list
 *
 * Return: string length
 */
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "holberton.h"
int print_i(va_list ap)
{
	void print(int n);
	int i;

	i = va_arg(ap, int);
	print(i);
	return (1);
}
/**
 * print_d - function prints decimals
 * @ap: argument pointr to the va_list
 *
 * Return: String length
 */
int print_d(va_list ap)
{
	void print(int n);
	int i;

	i = va_arg(ap, int);
	print(i);
	return (1);
}
/**
 * print_p - function prints percent sign
 * @ap: va_list pointer argument
 *
 * Return: return 1
 */
int print_p(va_list ap)
{
	int p;

	p = va_arg(ap, int);
	(void)(p);
	_putchar('%');
	return (1);
}
/**
 * print - function prints integer output
 * @n: Function argument
 *
 * Return: nothing
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_u - prints an unsigned int.
 * @arg: argument
 * Return: 0
 */

int print_u(va_list arg)
{
int dv = 1, i, resp;
unsigned int n = va_arg(arg, unsigned int);

for (i = 0; n / dv > 9; i++, dv *= 10)
;

for (; dv >= 1; n %= dv, dv /= 10)
{
resp = n / dv;
_putchar('0' + resp);
}
return (i + 1);
}
