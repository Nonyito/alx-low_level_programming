#include <stdio.h>
#include <time.h>

/**
 * main - prints the output of the if function
 *
 * Descripition: the if statement prints out values of n
 * Return: it is always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		pritf("%d is positive\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative\n")
	}

	return (0);
}
