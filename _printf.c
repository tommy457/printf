#include "main.h"
/**
 * _printf - prints anything
 * @format: the format string
 *
 * Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0, state = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format && *format != '\0')
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				len += _putchar(*format);
			}
		}
		else if (state == 1)
		{
			len += check_state(format, args);
			state = 0;
		}
		format++;
	}
	va_end(args);
	_putchar(-1);
	return (len);
}
