#include "main.h"

/**
 * print_triangle - printing trianlges
 *
 * @size: input value
 * Return: is 0
 */

void print_triangle(int size)
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
			for (n = 0; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
