#include "main.h"

/**
 * puts_half - a function that print second half of a string
 *
 * @str: the string
 *
 * Return: 0
 *
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int j;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}
	j = len;

	if (j % 2 <= 0)
	{
		n = j / 2;
	}
	else if (j % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	for (i = (j - n); i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
