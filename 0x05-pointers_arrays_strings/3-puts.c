#include "main.h"

/**
 * _puts - printing a string
 *
 * @str: output string
 * Return: is void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
