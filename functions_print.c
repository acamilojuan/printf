#include "holberton.h"
/**
 * print_string - Print string
 * @ap: arguments
 * Return: return the amount of characters
 */

int print_string(va_list ap)
{
	int x;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
		print_char(str[x]);
	return (x);
}

/**
 * print_percent - Print percent symbol
 * @ap: argumnt
 * Return: percent characters
 */

int print_percent(__attribute__((unused))va_list ap)
{
	print_char('%');
	return (1);
}
/**
 * print_decimal - Print percent symbol
 * @ap: argumnt
 * Return: decimal characters
 */
int print_decimal(va_list ap)
{
	int p = 0;
	int contador = 0;

	p = va_arg(ap, int);
	contador += print_n(p);

	return (contador);

}
/**
 * print_integer - Print integer
 * @ap: argumnt
 * Return: int characters
 */
int print_integer(va_list ap)
{
	int p = 0;

	p += print_n(va_arg(ap, int));

	return (p);
}
/**
 * print_n - prints an integer char by char
 * @n: The integer to print
 *
 * Return: void
 */
int print_n(int n)
{
	int aux, i, len, m;

	aux = 0;
	i = 0;
	len = 0;
	m = 0;

	if (n == INT_MIN)
	{
		n = n + 1;
		aux = 1;
	}

	if (n < 0)
	{
		n = -n;
		print_char('-');
		i++;
	}

	if (n / 10 != 0)
		len = (m + print_n(n / 10));
	if (aux == 1)
		print_char('8');
	else
		print_char(n % 10 + '0');
	i++;
	return (i + len);
}
