#include "main.h"

/**
 * print_array - printing a array of ints
 *
 * @a: the int one
 * @n: the int two
 * Return: it is a void
 */

void print_array(int *a, int n)
{
	int i;
	int num;

	for (i = 0; i < n; i++)
	{
		num = a[i];
		do
		{
			_putchar(num % 10 + '0');
			num /= 10;
		}
		while (num != 0);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
