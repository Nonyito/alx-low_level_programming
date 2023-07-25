#include "main.h"

/**
 * puts_half - printing half of string
 *
 * @str: the input string
 * Return: it is a void
 */

void puts_half(char *str)
{
	int l = (strlen(str) + 1) / 2;

	_putchar("%s\n", &str[l]);
}
