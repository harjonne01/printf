#include "main.h"
#include <stdio.h>

/**
 * _printf - Print a function
 * @format: format specifier
 * Return: formated character
 

int _printf(const char *format, ...)
{
	int num_char = 0;

	va_list args;

	va_start(args, format);

	if (format == Null)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			num_char++;
		}
		else
		{
			putchar('%');
			num_char++;
		}
	}
	va_end(args);
	return (num_char);
}
