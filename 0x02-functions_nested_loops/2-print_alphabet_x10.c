#include <stdio.h>
#include <stdlib.h>
/**
 * main - two loops, while and for
 *
 * Description: printing a to zee in ten times
 * Return: it is 0
 */

int main(void)
{
	int n = 0;
	int i;

	while (n <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
