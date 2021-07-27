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
int print_c(va_list);
int print_s(va_list);
int print_i(va_list);
int print_d(va_list);
int print_p(va_list);

#endif
