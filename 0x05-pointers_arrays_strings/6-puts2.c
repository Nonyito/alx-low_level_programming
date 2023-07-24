#include "main.h"

/**
 * puts2 - printing each line in new line
 *
 * @str: the input character
 * Return: it is a void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
