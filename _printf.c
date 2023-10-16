#include "main.h"

/**
 * _printf - print function that prints
 * @format: format identifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int num_char = 0;

	va_list args;

	va_start(args, format);

	if (format == Null)
		putchar(-1);

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
		else if (*format == 'c')
		{
			char c = va_arg(args, int);

			putchar(c);
			num_char++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);

			while (*str != '\0')
			str++;
			putchar(str);
		}
		format++;
	}
	va_end(args);
	return (num_char);
}
