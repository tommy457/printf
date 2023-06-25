#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_str(va_list args);
int check_state(const char *fmt, va_list args, int len);
#endif
