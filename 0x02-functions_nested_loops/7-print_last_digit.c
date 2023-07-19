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
	int numlas = num % 10;

	if (numlas < 0)
		numlas *= -1;
		_putchar(numlas);
		return (numlas);
}
