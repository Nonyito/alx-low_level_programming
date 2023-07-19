#include <stdio.h>

/**
 * main - while loop
 *
 * Description: prototype, while loop printing alphabet
 * Return: it is always 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
}
