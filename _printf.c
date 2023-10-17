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

/**
* print_char - Prints a character.
* @args: argument list containing
* the char to be printed.
* Return: count of characters printed.
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
* print_string - Prints a string.
* @args: argument list containing
* the string to be printed.
* Return: length of string.
*/

int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	for (s_len = 0; s[s_len] != '\0'; s_len++)
	{
		_putchar(s[s_len]);
	}
	return (s_len);
}
