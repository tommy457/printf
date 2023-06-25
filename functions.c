#include "main.h"
/**
 * unnum_2_str - convert unsinged num to string.
 * @number: number to be converted.
 * @base: base to be converted from.
 * @bufer: array to store the string
 * Return: NA
 */
void unnum_2_str(int number, int base, char *bufer)
{
	char buf[65];
	int i, j = 0;

	if (number == 0)
	{
		*bufer++ = '0';
		*bufer = 0;
		return;
	}

	for (i = 0; i < 65; i++)
	{
		buf[i] = 0;
	}

	while (number)
	{
		int num = number % base;

		if (num >= 10)
		{
			buf[j++] = 'a' + (num - 10);
		}
		else
		{
			buf[j++] = '0' + num;

		}
		number /= base;
	}
	for (i = j - 1; i != 0; i--)
	{
		*bufer++ = buf[i];
	}
	*bufer++ = buf[0];
	*bufer = 0;
}
/**
 * num_to_str - convert singed num to string.
 * @num: number to be converted.
 * @base: base to be converted from.
 * @buf: array to store the string
 * Return: NA
 */
void num_to_str(int num, int base, char *buf)
{
	if (num < 0)
	{
		*buf++ = '-';
		num = -num;
	}
	unnum_2_str(num, base, buf);

}
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
 * check_state - ...
 * @args: agrument
 * @fmt: string
 * Return: int
 */
int check_state(const char *fmt, va_list args)
{
	int len = 0;

	if (*fmt == '%')
	{
		_putchar('%');
		len++;
	}
	else if (*fmt == 'c')
	{
		char x = va_arg(args, int);

		_putchar(x);
		len++;

	}
	else if (*fmt == 'd' || *fmt == 'i')
	{
		int num = va_arg(args, int);
		char buff[24];

		num_to_str(num, 10, buff);

		len += printf_str(buff);

	}
	else if (*fmt == 's')
	{
		char *str = va_arg(args, char *);

		printf_str(str);
	}


	else
	{
		exit(EXIT_FAILURE);
	}
	return (len);
}
