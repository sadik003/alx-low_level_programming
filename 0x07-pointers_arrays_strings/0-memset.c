#include "main.h"

/**
 * _memset - functions that reset memory space with constant byte
 * @s: pointer to the space to be filled
 * @b: byte to fill the space
 * @n: space to be filled
 * Return: to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
			i++;
	}
	return (0);
}
