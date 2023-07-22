#include "main.h"

/**
 * print_square - printing a square
 *
 * @size: the input
 * Return: is 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, n;

		for (i = 0; i < size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
