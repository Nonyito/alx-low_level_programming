#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - two loops, while and for
 *
 * Description: printing a to zee in ten times
 * Return: it is 0
 */

void print_alphabet_x10(void)
{
	char let = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (let <= 'z')
		{
			putchar(let);
			let++;
		}
		let = 'a';
		putchar('\n');
	}
}
