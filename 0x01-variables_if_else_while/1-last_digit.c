#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function prints the last digit of a random
 * number generated and states if its positive, negative or zero
 * Return: 0
 */

int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;

	if (n1 > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5\n", n, n1);
	}
	else if (n1 == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, n1);
	}
	else if (n1 < 6 && n1 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
	}
	/* your code goes there */
	return (0);
}
