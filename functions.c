#include "main.h"
/**
 * print_number - ...
 * @base: number
 * @x: number
 * Return: NA
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
 * specifier - ...
 * @s: character
 * @x: number
 * Return: NA
 */
int specifier(char s, int x)
{
	int count = 0;

	if (s == 'd' || s == 'i')
	{
		count += print_number(x, 10);
	}
	return (count - 1);
}
