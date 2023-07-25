#include "main.h"

/**
 * puts_half - printing half of string
 *
 * @str: the input string
 * Return: it is a void
 */

void puts_half(char *str)
{
	int leng = strlen(str);

	int begin = (leng % 2 == 0) ? leng / 2 : (leng + 1) / 2;
	_putchar("%s\n", str + start_index);
}
