#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing the alphabet in upper and low case
 *
 * Description: it prints the a to zee of alphabets in low and upper case
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

	n = 'A';

	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
