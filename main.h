#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_str(va_list args);
int get_number(va_list args, char s);
int print_number(int a, int base);

#endif
