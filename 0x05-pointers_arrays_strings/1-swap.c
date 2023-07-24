#include "main.h"

/**
 * swap_int - swaping two int nums
 *
 * @a: first int num
 * @b: second int num
 * Return: it is 0
 */

void swap_int(int *a, int *b)
{
	int temper = *a;
	*a = *b;
	*b = temper;
}
