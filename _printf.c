#include "main.h"
#include <stdio.h>

/**
 * _printf - Print a function
 * @format: format specifier
 * Return: formated character
 */

int _printf(const char *format, ...)
{
	int num_char = 0;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

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
		format++;
	}
	va_end(args);
	return (num_char);
}

/**
* print_percent - Prints the character '%'
* @args: Variable argument list (unused)
* Return: count of characters printed.
*/

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
* print_else - Prints a character followed by '%'
* @args: Variable argument list containing the character to be printed
* Return: Updated count of characters printed.
*/

int print_else(va_list args)
{
	char c = va_arg(args, int);

	_putchar('%');
	_putchar(c);
	return (2);
}
