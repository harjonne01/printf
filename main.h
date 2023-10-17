#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_integer(va_list args, int printed);
int print_string(va_list args);
int print_char(va_list args);


#endif
