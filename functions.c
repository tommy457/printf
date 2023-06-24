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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		len++;
	}
	return (len);
}

/**
 * print_number - ...
 * @base: number
 * @x: number
 * Return: int
 */
int print_number(int x, int base)
{
	int count = 1;

	if (x  < base)
	{
		_putchar(x % base + 48);
		return (count);
	}
	else
	{
		count += print_number(x / base, base);
		_putchar(x % base + 48);

	}
	return (count);

}
/**
 * get_number - ...
 * @args: argumet
 * @s: charecter
 * Return: int
 */

int get_number(va_list args, char s)
{
	int count = 0;
	int x = va_arg(args, int);

	if (s == 'd' || s == 'i')
	{
		count += print_number(x, 10);
	}
	if (s == 'o')
	{
		count += print_number(x, 8);
	}
	if (s == 'b')
	{
		count += print_number(x, 2);
	}
	if (s == 'c')
	{
		_putchar(x);
		count++;
	}

	return (count);
}
