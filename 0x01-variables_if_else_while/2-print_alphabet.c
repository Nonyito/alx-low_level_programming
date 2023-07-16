#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - contain the while loop for the alphabet
 *
 * Description: this function prints alphabet from a to z
 * Return: it is always 0
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
