#include "main.h"
#include <stdio.h>

/**
 * _abs - find absolute point
 *
 * Return: 
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = (-1) * num;
		_putchar(num);
	}
	else
	{
		_putchar(num);
	}
	return (0);
}
