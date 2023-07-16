#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - it prints the alphabet
 *
 * Description: it prints all the alphabet not only for two
 * Return: it is always 0
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
