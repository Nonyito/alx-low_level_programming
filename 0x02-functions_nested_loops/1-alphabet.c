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
	char let = 'a';

	while (let < 'z')
	{
		putchar(let);
		let++;
	}
	putchar("\n");
	return (0);
}
