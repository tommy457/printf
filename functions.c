#include "main.h"
/**
 * print_number - ...
 * @base: number
 * @x: number
 * Return: NA
 */

void print_number(int x, unsigned int base)
{


	if (x  < base)
	{
		_putchar(x % base + 48);
		return;
	}
	else
	{
		print_number(x / base, base);
		_putchar(x % base + 48);
	}

}
/**
 * specifier - ...
 * @s: character
 * @x: number
 * Return: NA
 */
void specifier(char s, int x)
{
	if (s == 'd' || s == 'i')
	{
		print_number(x, 10);
	}
}
