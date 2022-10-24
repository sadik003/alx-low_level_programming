#include "main.h"
/**
 * print_rev - prints spring in reverse order
 *
 * @s: string variable
 *
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int len;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}


