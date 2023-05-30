#include "main.h"

/**
 * print_rev - the funtion print the reverse of a string
 * @str: pointer to string to be reverse
 */


void print_rev(char *str)
{
	int i;
	int j;
	int len;

	for (i = 0; str[i] != '\0'; i++)
	{

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
