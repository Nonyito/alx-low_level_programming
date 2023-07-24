#include "main.h"

/**
 * puts2 - printing each line in new line
 *
 * @str: the input character
 * Return: it is a void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
