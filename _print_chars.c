#include "holberton.h"
/**
 * _print_chars - Function to print characters
 * @arguments: List of arguments to be used
 * Return: Return 1
 */

int _print_chars(va_list arguments)
{
	write_chars(va_arg(arguments, int));
	return (1);
}
