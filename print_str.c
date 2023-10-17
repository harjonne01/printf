#include "main.h"
#include <stdio.h>

/**
* print_string - Prints a string.
* @args: argument list containing
* the string to be printed.
* Return: length of string.
*/

int print_string(va_list args)
{
        char *s = va_arg(args, char *);
        int s_len = 0;

        for (s_len = 0; s[s_len] != '\0'; s_len++)
        {
                _putchar(s[s_len]);
        }
        return (s_len);
}
