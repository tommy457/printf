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
	int i = 0, len = 0;
	int x;


	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'd' || format[i] == 'i')
			{
				i++;
				x = va_arg(args, int);
				specifier(format[i], x);
				i++;
			}

		}
		_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
