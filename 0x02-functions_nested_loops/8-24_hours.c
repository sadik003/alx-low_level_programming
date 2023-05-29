#include "main.h"

/**
 * jack_bauer - a function that print every minutes of the day
 * from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar('\n');
		}
	}
}
