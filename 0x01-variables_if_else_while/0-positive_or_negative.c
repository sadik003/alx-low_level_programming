#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function prints positive, negative or
 * zero depending on the number generated
 * Return: 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* your code goes there */
	return (0);
}
