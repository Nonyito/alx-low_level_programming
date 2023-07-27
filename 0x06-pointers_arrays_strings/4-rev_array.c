#include "main.h"

/**
 * reverse_array - I reverse all the content in array
 *
 * @a: input char
 * @n: input num
 * Return: it is a void
 */

void reverse_array(int *a, int n)
{
	int i, c, now;

	for (i = 0, c = n - 1; i < c; i++, c--)
	{
		now = a[i];
		a[i] = a[c];
		a[c] = now;
	}
}
