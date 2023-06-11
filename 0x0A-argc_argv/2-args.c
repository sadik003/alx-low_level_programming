#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments passed
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{i
		printf("%s\n", argv[i]);
	}
	return (0);
}
