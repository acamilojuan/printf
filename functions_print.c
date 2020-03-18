#include "holberton.h"
/**
 * _print_strings - Function to print strings
 * @arguments: List of arguments to be used
 * Return: Number of characters
 */

int _print_strings(va_list arguments)
{
	int a = 0;
	char *string;

	string = va_arg(arguments, char *);
	if (string == NULL)
		string = "(null)";
	while (string[a] != '\0')
	{
		write_chars(string[a]);
		a++;
	}
	return (a);
}

/**
 * _print_modulo - Function to print modulo symbol
 * @arguments: List of arguments to be used
 * Return: Modulo symbols
 */

int _print_modulo(__attribute__((unused))va_list arguments)
{
	write_chars('%');
	return (1);
}
/**
 * _print_decimal - Function to print decimals
 * @arguments: List of arguments to be used
 * Return: Sum of Decimals
 */
int _print_decimal(va_list arguments)
{
	int a = 0, sum = 0;

	a = va_arg(arguments, int);
	sum += _print_numb(a);
	return (sum);

}
/**
 * _print_integers - Function to print integers
 * @arguments: List of arguments to be used
 * Return: Sum of integer chars
 */
int _print_integers(va_list arguments)
{
	int sum = 0;

	sum += _print_numb(va_arg(arguments, int));
	return (sum);
}
/**
 * _print_numb - Function to print integers one by one
 * @numb: Variable int to be printed
 * Return: Integer variable
 */
int _print_numb(int numb)
{
	int a = 0, b = 0, leng = 0, m = 0;

	if (numb == INT_MIN)
	{
		numb = numb + 1;
		b = 1;
	}
	if (numb < 0)
	{
		numb = -numb;
		write_chars('-');
		a++;
	}
	if (numb / 10 != 0)
		leng = (m + _print_numb(numb / 10));
	if (b == 1)
		write_chars('8');
	else
	{
		write_chars(numb % 10 + '0');
	}
	a++;
	return (a + leng);
}
