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
	int len, state = 0;

	va_start(args, format);
	if (format == NULL)
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
				_putchar(*format);
			}
		}
		else if (state == 1)
		{
			len += check_state(format, args, len);
			state = 0;
		}
		format++;
	}
	va_end(args);
	return (len);
}
