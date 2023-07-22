#include "main.h"

/**
 * main - using if else fizz buzz
 *
 * Return: it is 0
 */

int fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			_putchar("Fizz ");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz ");
		}
		else
		{
			_putchar("%d ", i);
		}
	}
	_putchar("\n");
	return (0);
}
