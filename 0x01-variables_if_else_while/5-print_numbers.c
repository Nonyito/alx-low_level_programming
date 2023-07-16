#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for loop inside
 *
 * Description: it print all the base of 10
 * Return: it is always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
