/*
 * 
 * Title: a function that check if an alphabet is lowercase 
 * Author: Abubakar Unwaha
 *
 */

#include "main.h"

/*
 * _islower - a function that check weather and alphabet is lower or otherwise
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase and 0 if otherwise
 *
 */
	int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	
		return (1);
	
	else
		return (0);
}
