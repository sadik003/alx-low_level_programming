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
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
}


