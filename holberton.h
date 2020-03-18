#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct operators - it's the structure of the operators
 * @operators: Pointer to the structure of the operators
 * @func: Pointer to the function that is going to be used
 */
struct operators
{
	char *operators;
	int (*func)(va_list);
};
typedef struct operators operators_;
int _printf(const char *format, ...);
int _analyser(const char *format, operators_ op2[], va_list arguments);
int write_chars(char);
int _print_chars(va_list);
int _print_strings(va_list);
int _print_modulo(va_list);
int _print_decimal(va_list arguments);
int _print_integers(va_list arguments);
int _print_numb(int numb);

#endif
