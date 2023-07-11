#include <unistd.h>

/**
 * _putchar - the function print character passed
 * @c: char to be printed
 * Return: 0 on success and -1 on failure
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
