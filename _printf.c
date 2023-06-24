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


	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{

				len += printf_str(args);
			}
			len += get_number(args, format[i]);
			i++;


		}

		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
