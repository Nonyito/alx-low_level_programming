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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", n);
	}

	return (0);
}
