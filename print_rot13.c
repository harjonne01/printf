#include "main.h"
#include <stdio.h>

/**
 * print_rot13 - print string using rot13
 * @args: va_list containing the string to be encoded
 * Return: count of characters printed
 */

int print_rot13(va_list args)
{
	int num_count = 0;
	char *str = va_arg(args, char *);
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (str[i] == input[j])
			{
				_putchar(output[j]);
				num_count++;
				break;
			}
		}
		if (!input[j])
		{
			_putchar(str[i]);
			num_count++;
		}
	}
	return (num_count);
}
