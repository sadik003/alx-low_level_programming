#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints elements in an array
 * followed by comma and a space
 *
 * @a: a pointer to the array
 *
 * @n: number of the element in the array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;
	int j;

	j = n - 1;
	for (i = 0; i <= j; i++)
	{
		printf("%d", a[i]);

		if (i < j)
		{
			printf(", ");
		}
	}
	printf("\n");
}
