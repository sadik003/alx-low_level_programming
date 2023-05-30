#include "main.h"

/**
 * swap_int - the function that swap two numbers
 * @a: the first number
 * @b: the second number
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

