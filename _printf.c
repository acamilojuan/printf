#include "holberton.h"
/**
 *_printf - print char
 *@format: const char *
 *Return: int print
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {
		{"c", _print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};
	int print = 0;

	va_list ap;

	if (format != NULL)
	{
		va_start(ap, format);
		print = _parseo(format, ops, ap);
		return (print);
	}
	va_end(ap);
	return (-1);
}
