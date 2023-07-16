#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for loop
 *
 * Description: its prints alphabets from zee to a
 * Return: it is always 0
 */

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
