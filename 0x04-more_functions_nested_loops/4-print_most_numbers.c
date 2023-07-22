#include "main.h"
#include <stdio>

/**
 * print_most_numbers - printing the most num
 *
 * Return: is void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
