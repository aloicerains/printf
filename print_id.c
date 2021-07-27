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
/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_o(va_list o)
{
unsigned int a[11];
unsigned int i, m, n, sum;
int count;

n = va_arg(o, unsigned int);
m = 1073741824; /* (8 ^ 10) */
a[0] = n / m;
for (i = 1; i < 11; i++)
{
m /= 8;
a[i] = (n / m) % 8;
}
for (i = 0, sum = 0, count = 0; i < 11; i++)
{
sum += a[i];
if (sum || i == 10)
{
_putchar('0' + a[i]);
count++;
}
}
return (count);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 *
 * Return: number of digits printed
 */
int print_b(va_list b)
{
unsigned int n, m, i, sum;
unsigned int a[32];
int count;

n = va_arg(b, unsigned int);
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
