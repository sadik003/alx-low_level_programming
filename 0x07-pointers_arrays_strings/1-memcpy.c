#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination area
 * @src: pointer to the source area
 * @n: bytes to be copied
 * Return: returns to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
