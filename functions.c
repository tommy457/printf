#include "main.h"

/**
 * printf_str - ...
 * @args: agrument
 * Return: int
 */
int printf_str(va_list args)
{
	char *str;
	int i = 0, len = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len += _putchar(str[i]);
	}
	return (len);
}
/**
 * check_state - ...
 * @args: agrument
 * @fmt: string
 * @len: int
 * Return: int
 */
int check_state(const char *fmt, va_list args, int len)
{
	if (*fmt == 'c')
	{
		char x = va_arg(args, int);

		len += _putchar(x);
	}
	else if (*fmt == 's')
	{
		len += printf_str(args);
	}
	else
	{
		len += _putchar(*fmt);
	}
	return (len);
}
