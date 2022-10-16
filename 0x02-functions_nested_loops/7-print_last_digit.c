#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int x = n % 10;

	_putchar(x);

	return (x);
}

