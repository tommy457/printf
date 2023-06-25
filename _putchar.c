#include <unistd.h>

/**
 * _putchar - Print char by char.
 * @c: brings value to print
 * Return: Integr result of write function.
 */

int _putchar(char c)
{
	(write(1, &c, 1));
	return (1);
}
