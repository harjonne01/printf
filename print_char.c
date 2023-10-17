#include "main.h"
#include <stdio.h>

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
