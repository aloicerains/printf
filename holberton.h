#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct format_specifier - creates a format variable
 * @spec: member specifes the format
 * @f: function pointer
 */

typedef struct format_specifier
{
	char *spec;
	int (*f)(va_list ap);
} form;
int _putchar(char c);
int _printf(const char *format, ...);
void print(int n);
int count(int n);
int print_c(va_list arg);
int print_s(va_list arg);
int print_i(va_list arg);
int print_d(va_list arg);
int print_p(va_list arg);
int print_u(va_list arg);
int print_o(va_list arg);
int print_b(va_list arg);

#endif
