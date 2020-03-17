#include "holberton.h"
/**
 * _print_char - Prints character
 * @ap: arguments
 * Return: return the amount of characters
 */

int _print_char(va_list ap)
{
	print_char(va_arg(ap, int));
	return (1);
}
