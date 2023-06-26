#include "main.h"

/**
 * print_int - prints int
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_int(va_list args, char buf[])
{
	int num = va_arg(args, int), len = 0;

	num_to_str(num, 10, buf);
	len += printf_str(buf);

	return (len);
}

/**
 * print_unsined_int - prints unsined int
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_unsined_int(va_list args, char buf[])
{
	unsigned int num = va_arg(args, int), len = 0;

	unnum_2_str(num, 10, buf);
	len += printf_str(buf);

	return (len);
}

/**
 * print_binary_int - prints binary
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_binary_int(va_list args, char buf[])
{
	unsigned int num = va_arg(args, int), len = 0;

	unnum_2_str(num, 2, buf);
	len += printf_str(buf);

	return (len);
}

/**
 * print_octal_int - prints octal
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_octal_int(va_list args, char buf[])
{
	int num = va_arg(args, int), len = 0;

	num_to_str(num, 8, buf);
	len += printf_str(buf);

	return (len);
}

/**
 * print_pointer - prints pointer
 * @args: agrument
 * @buf: buffer
 * Return: int
 */
int print_pointer(va_list args, char buf[])
{
	void *ptr = va_arg(args, void *);
	int len = 0;

	unnum_2_str((uint64_t) ptr, 16, buf);
	_putchar('0');
	_putchar('x');
	len += 2;
	len += printf_str(buf);
	return (len);
}
