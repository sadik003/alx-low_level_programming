/*
 * Title: Check for alphanumeric
 * Author: Abubakar Unwaha
 *
 */



#include "main.h"

/*
 * _isalpha - a function that checks if te entered value is alphanumeric
 *
 * @c: is the entered value
 *
 * Return: 1 if alphanumeric and returns 0 if otherwise
 *
 */

int _isalpha(int c);

{
	char c;

	if (c >= 48 && c <= 57)
		if (c >= 65 && c <= 90)
			if (c >= 97 && c <= 122)
			{
				return (1);
			}
				else
					return (0);
}
