#include "main.h"

/**
 * print_int - prints intiger number
 * @args: number arguements
 * Return: printed characters
 */

int print_int(va_list args)
{
	unsigned int divisor;
	unsigned int num;
	int num_char;

	num = va_arg(args, unsigned int);
	num_char = 0;

	if ((signed int)num < 0)
	{
		num = -num;
		_putchar('-');
		num_char++;
	}
	divisor = 1;

	while (num / divisor > 9)
		divisor *= 10;
	while ((signed int)divisor > 0)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
		num_char++;
	}
	return (num_char);
}
