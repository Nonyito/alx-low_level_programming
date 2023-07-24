#include "main.h"

/**
 * print_rev - printing string in reverse
 *
 * @s: input string
 * Return: it is void
 */

void print_rev(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	for (int i = leng - 1; i >= 0; i--)
	{
		_putchar(*(s + 1));
	}
	_putchar('\n');
}
