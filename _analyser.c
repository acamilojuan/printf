#include "holberton.h"
/**
 * _analyser - Function to analyse data
 * @format: Pointer to the data of the list
 * @op2: array of the structure
 * @arguments: List of arguments
 * Return: int
 */

int _analyser(const char *format, operators_ op2[], va_list arguments)
{
	int a = 0, b = 0, print = 0;
	int c;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; op2[b].operators != NULL; b++)
			{
				if (format[a + 1] == op2[b].operators[0])
				{
					c = op2[b].func(arguments);
					if (c == -1)
						return (-1);
						print += c;
						break;
				}
			}
			if (op2[b].operators == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					write_chars(format[a]);
					write_chars(format[a + 1]);
					print = print + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			write_chars(format[a]);
			print++;
		}
	}
	return (print);
}
