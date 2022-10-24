#include "main.h"

/**
 * puts2 - function that print other cahracters
 * @str: string to print
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int len = 0;
	int j;

	while (str[len] != '\0')
	{
		len++;
	}
	j = len;
	for (i = 0; i < j; i = i + 2)
	{
	_putchar(str[i]);
	}
		_putchar('\n');
}
