#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_str(char *s);
int check_state(const char *fmt, va_list args);
void unnum_2_str(int number, int base, char *bufer);
void num_to_str(int num, int base, char *buf);

#endif
