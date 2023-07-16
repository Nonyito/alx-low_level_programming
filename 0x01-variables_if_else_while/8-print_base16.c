#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for loop and if else statement
 *
 * Description: printing the var of and base of 16
 * Return: it is always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
