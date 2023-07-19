#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - printing the last digit
 *
 * @num: the input number
 * Return: it is num
 */

int print_last_digit(int num)
{
	int num = num % 10;

	if (num < 0)
	{
		num *= -1;
		_putchar(num);
		return (num);
	}
	else
	{
		_putchar(num);
		return (num);
	}
}
