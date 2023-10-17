#include "main.h"

/**
* print_reverse - Prints a string in reverse order
* @args: Variable argument list containing additional arguments
* Return: count of characters printed.
*/

int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);

	int i;
	int num_count = 0;

	for (i = 0; str[i]; i++)

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		num_count++;
	}
	return (num_count);
}

