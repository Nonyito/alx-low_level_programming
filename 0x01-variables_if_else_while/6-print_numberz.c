#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - carry for loop
 *
 * Description: its a for loop it prints the base of 10
 * Return: it is always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
