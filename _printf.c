#include "main.h"

/**
 * _printf - Print a function
 * @format: format specifier
 * Return: formated character
 */

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
			write(1, format, 1);
			num_char++;
		}
		else
		{
			format++;
			break;
		}
		if (*format == '%')
			write(1, format, 1);
		num_char++;
		else if (*format == 'c')
		{
			char c = va_arg(args, int);

			write(1, &c, 1);
			num_char++;
		}
	}
	va_end(args);
	return (num_char);
}
