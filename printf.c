#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list parameter;
	int a;
	
	va_start(parameter, format);
	if (format == '\0')
		format = "";
	for (a = 0; format[a] != '\0'; a++)
		{
		}
	va_end(parameter);
	write(1, format, a);
	return (a);
}
