#include "variadic_functions.h"

/**
 * sum_them_all - the function sum up all the parameters
 * @n: the number of parameters
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list k;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(k, int);
	}
	va_end(k);
	return (sum);
}
