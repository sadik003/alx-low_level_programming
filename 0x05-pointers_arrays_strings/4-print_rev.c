#include "main.h"
/**
 *
 * print_rev - prints spring in reverse order
 *
 * @s: string variable
 *
 * return: 0
 *
 */
void print_rev(char *s);

{
	int i

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
