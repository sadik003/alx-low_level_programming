#include "main.h"
/**
 * _strlen - a functio that returns the lenght of string
 * @s: char s
 *
 * Return: 1 on success and 0 otherwise
 */

int _strlen(char *s)

{
	int  a;
	
	a = 0;
	while (*s != '\0')

{
		a++;
		s++;
}
	return (a);

}
