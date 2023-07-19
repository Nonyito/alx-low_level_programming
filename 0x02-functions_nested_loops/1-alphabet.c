#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - while loop
 *
 * Description: prototype, while loop printing alphabet
 * Return: it is always 0
 */

void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
}
