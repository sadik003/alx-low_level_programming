#include "main.h"

/*
 * print_sign - a function that prints the sign of a number
 * @n: number to check
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 *
 */

int print_sign(int n)
{

	if (n < 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar((0 % 10) + '0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
