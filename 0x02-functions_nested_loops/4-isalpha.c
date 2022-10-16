/*
 * Title: Check for alphanumeric
 * Author: Abubakar Unwaha
 *
 */



#include "main.h"

/*
 *
 * _isalpha - function that checks if te entered value is alphanumeric
 *
 * @c: is the entered value
 *
 * Return: 1 if alphanumeric and returns 0 if otherwise
 *
 */

int _isalpha(int c)

{
	int ch;

	if (ch >= 48 && ch <= 57)
	{
		return (1);
	}
	else if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	else if (ch >= 97 && ch <= 122)
			{
				return (1);
			}
				else
					return (0);
}
