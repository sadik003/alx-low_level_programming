#include "main.h"

/**
 * _puts - a function that print a string followed by a new line
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
