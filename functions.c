#include "main.h"

/**
 * printf_str - prints string
 * @s: string
 * Return: int
 */
int printf_str(char *s)
{
	int i, len = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
/**
 * print_c - prints character
 * @args: argument
 * @buf: buffer
 * Return: int
 */

int print_c(va_list args, __attribute__ ((unused)) char buf[])
{
	char str = va_arg(args, int), len = 0;

	_putchar(str);
	len++;

	return (len);
}

/**
 * check_state - ...
 * @args: agrument
 * @fmt: string
 * Return: int
 */
int check_state(const char *fmt, va_list args)
{
	int len = 0, i;
	char buff[65];

	cases specs[] = {
		{'s', print_s},
		{'c', print_c},
		{'d', print_int},
		{'i', print_int},
		{'p', print_pointer},
		{'o', print_octal_int},
		{'b', print_binary_int},
		{'u', print_unsined_int},
		{'x', print_hex_int_lower},
		{'X', print_hex_int_upper},
		{'\0', NULL},
	};
	if (*fmt != '%')
	{
		for (i = 0; specs[i].spec != '\0'; i++)
		{
			if (*fmt == specs[i].spec)
				len += specs[i].f(args, buff);
		}
	}
	else if (*fmt == '%')
	{
		_putchar('%');
		len++;
	}
	else
	{
		exit(-1);
	}
	return (len);
}
