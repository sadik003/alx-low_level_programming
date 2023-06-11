#include "main.h"
#include <stdio.h>

/**
 * main - the function prints the name of the function
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */


int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
