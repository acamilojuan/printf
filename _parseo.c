#include "holberton.h"
/**
 * _parseo - parseo de data
 * @format: const char
 * @ops: opt []
 * @ap: va_list
 * Return: int
 */

int _parseo(const char *format, op_t ops[], va_list ap)
{
	int i, j, r, print = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; ops[j].op; j++)
			{
				if (format[i + 1] == ops[j].op[0])
				{
					r = ops[j].f(ap);
					if (r == -1)
						return (-1);
					print += r;
					break;
				}

				if (ops[j].op == NULL && format[i + 1] != ' ')
				{
					if (format[i + 1] != '\0')
					{
						print_char(format[i]);
						print_char(format[i + 2]);
						print = print + 2;
					}
					else
						return (-1);
				}
			}
			i = i + 1;
		}
		else
		{
			print_char(format[i]);
			print++;
		}
	}
	return (print);
}
