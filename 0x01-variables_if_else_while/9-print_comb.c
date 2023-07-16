#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - fors loops and if
 *
 * Description: it list the nam from 0 to 9 like array
 * Return: it is always 0
 */

int main(void)
{
	char i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = i; n <= '9'; n++)
		{
			putchar(i);
			putchar(n);
			if (i != '9' || n != '9')
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
