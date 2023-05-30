#include "main.h"

/**
 * _strlen - a function that return string length
 * @c: character pointer
 * Return: string length
 */


int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
