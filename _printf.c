#include "holberton.h"
/**
 *_printf - Main function
 *@format: const char *
 *Return: integer to print
 */
int _printf(const char *format, ...)
{
	operators_ op2[] = {
		{"c", _print_chars},
		{"s", _print_strings},
		{"%", _print_modulo},
		{"d", _print_decimal},
		{"i", _print_integers},
		{NULL, NULL}
	};
	int prints = 0;
	va_list arguments;

	if (format != NULL)
	{
		va_start(arguments, format);
		prints = _analyser(format, op2, arguments);
		va_end(arguments);
	}
	else
	{
		return (-1);
	}
	return (prints);
}
