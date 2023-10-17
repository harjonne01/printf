#include "main.h"
#include <stdio.h>

/**
* print_number - Prints an integer using putchar
* @args: Variable argument list containing
* Return: Updated count of characters printed.
*/
int print_number(va_list args)
{
unsigned int divisor;
unsigned int num;
int count;

num = va_arg(args, unsigned int);
count = 0;
if ((signed int)num < 0)
{
num = -num;
_putchar('-');
count++;
}
divisor = 1;

while (num / divisor > 9)
divisor *= 10;

while ((signed int)divisor > 0)
{
_putchar('0' + num / divisor);
num %= divisor;
divisor /= 10;
count++;
}
return (count);
}
