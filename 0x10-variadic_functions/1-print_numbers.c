#include "variadic_functions.h"

/**
 * print_numbers - functions that prints numbers
 * @separator: number separator
 * @n: number of inteers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list s;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
	if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(s);
	printf("\n");
}
