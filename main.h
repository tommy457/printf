#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * struct specifier - struct
 * @spec: specifier
 * @f: function to be executed
 */
typedef struct specifier
{
	char spec;
	int (*f)(va_list, char *);
} cases;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_str(char *s);
int check_state(const char *fmt, va_list args);
void unnum_2_str(uint64_t number, int base, char *bufer);
void num_to_str(int num, int base, char *buf);
int print_hex_int_lower(va_list args, char buf[]);
int print_hex_int_upper(va_list args, char buf[]);
int print_octal_int(va_list args, char buf[]);
int print_binary_int(va_list args, char buf[]);
int print_unsined_int(va_list args, char buf[]);
int print_int(va_list args, char buf[]);
int print_pointer(va_list args, char buf[]);
int print_s(va_list args, char buf[]);
int print_c(va_list args, char buf[]);
int print_S(va_list args, char buf[]);
#endif
