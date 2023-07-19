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
		putchar("+\n");
		return (1);
	}
	else if (n == 0)
	{
		putchar("0\n");
		return (0);
	}
	else
	{
		putchar("-\n");
		return (-1);
	}
}
