/*
 * Title: Check for alphanumeric
 * Author: Abubakar Unwaha
 *
 */



#include "main.h"

/*
 * _isalpha - function that checks if te entered value is alphanumeric
 *
 * @c: c is  the entered value
 *
 * Return: 1 if alphanumeric and returns 0 if otherwise
 *
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
