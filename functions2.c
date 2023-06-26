#include "main.h"

/**
 * unnum_2_str - convert unsinged num to string.
 * @number: number to be converted.
 * @base: base to be converted from.
 * @bufer: array to store the string
 * Return: NA
 */
void unnum_2_str(uint64_t number, int base, char *bufer)
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
 * print_hex_int_upper - prints hex in uppercase
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_hex_int_upper(va_list args, char buf[])
{
	unsigned int num = va_arg(args, int), len = 0, i;

	unnum_2_str(num, 16, buf);

	for (i = 0; buf[i]; i++)
	{
		if (buf[i] >= 'a' || buf[i] >= 'z')
		{
			buf[i] -= 32;
		}
	}
	len += printf_str(buf);

	return (len);
}

/**
 * print_hex_int_lower - prints hex in lowercase
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_hex_int_lower(va_list args, char buf[])
{
	unsigned int num = va_arg(args, int), len = 0;

	unnum_2_str(num, 16, buf);

	len += printf_str(buf);

	return (len);
}

/**
 * print_s - prints string
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_s(va_list args, __attribute__ ((unused)) char buf[])
{
	char *str = va_arg(args, char *), len = 0;

	len += printf_str(str);

	return (len);
}
