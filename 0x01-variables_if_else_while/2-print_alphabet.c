#include <stdio.h>

/**
 * main - The function prints alphabet in lower case
 * Return: 0
 */


int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
