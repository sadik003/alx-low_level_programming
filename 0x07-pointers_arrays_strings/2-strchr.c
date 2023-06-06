#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates character in a string
 * @s: pointer to the string
 * @c: character to locate
 * Return: c or NULL if not found
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
