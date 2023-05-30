#include "main.h"

/**
 * puts2 - a function that print every other character of a string
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i + 2)
	{
		-putchar(str[i]);
	}
	_putchar('\n');
}

