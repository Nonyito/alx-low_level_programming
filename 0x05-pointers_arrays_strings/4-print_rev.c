#include "main.h"

/**
 * print_rev - printing string in reverse
 *
 * @s: input string
 * Return: it is void
 */

void print_rev(char *s)
{
	int leng = strlen(s);
	int i;

	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
