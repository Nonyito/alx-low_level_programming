#include "main.h"

/**
 * _pow_recursion - i give power to num x from y
 *
 * @x: raised num
 * @y: give raise to num x
 * Return: it is 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
