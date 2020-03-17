#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * struct op- defines a structure
 * @op: the operator
 * @f: the fuction associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int print_char(char);
int _print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int _parseo(const char *format, op_t ops[], va_list ap);
int print_decimal(va_list ap);
int print_n(int n);
int print_integer(va_list ap);
#endif
