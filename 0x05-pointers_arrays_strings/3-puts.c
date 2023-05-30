#include "main.h"

/**
 * _puts - a function that print a string followed by a new line
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
