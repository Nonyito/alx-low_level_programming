#include "main.h"
#include <stdio.h>

/**
 * print_sign - it is about printing sign if true
 *
 * @n: it is our input
 * Return: it is 1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	else if (n == 0)
	{
		printf(0);
		return (0);
	}
	else
	{
		printf('-');
		return (-1);
	}
}
