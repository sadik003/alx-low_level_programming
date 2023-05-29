#include "main.h"

/**
 * times_table - function that print times table
 */

void times_table(void)
{
	int a;
	int b;
	int tt = 0;
	int res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = b * tt;
		_putchar(res);
		if (b != 9)
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
		tt++;
	}
}

