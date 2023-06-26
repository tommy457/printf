#include <unistd.h>

/**
 * _putchar - Print char by char.
 * @c: brings value to print
 * Return: 1
 */

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buff, i);
		i = 0;
	}
	if (c != -1)
		buff[i++] = c;
	return (1);
}
