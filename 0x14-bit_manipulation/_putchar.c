#include <unistd.h>

/**
 * _putchar - a function that prints character
 * @c: character to be printed
 * Return: 1 on success and 0 for error
 */

int _putchar(char c)
{
	write(1, &c, 1);
}
