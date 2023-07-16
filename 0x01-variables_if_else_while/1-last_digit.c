#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - getting the last number
 *
 * Descripition: the function get the last number and print it's value
 * Return: it is always 0
 */

int main(void)
{
	int n;
	int nn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nn = n % 10;

	if (nn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nn);
	}
	else if (nn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nn);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nn);
	}

	return (0);
}
