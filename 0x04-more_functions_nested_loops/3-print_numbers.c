#include "main.h"

/**
 * print_numbers - a function that prints from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
