#include "main.h"

/**
 * _isalpha - the function checks for lower and uppercase
 * @c: character to be checked
 * Return: 1 for success and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

