#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: int a
 * @b: int b
 * Return:  1 on success
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
