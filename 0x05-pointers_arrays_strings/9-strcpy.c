#include "main.h"

/**
 * _strcpy - a function that copies string from scr to dest array
 *
 * @src: the pointer to the string
 * @dest: the pointer to the destination
 * Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
