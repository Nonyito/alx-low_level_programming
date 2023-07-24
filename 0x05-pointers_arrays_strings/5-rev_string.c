#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: input string
 * Return: it is void
 */

void rev_string(char *s)
{
	int leng = strlen(s);
	int i = 0;
	int n = leng - 1;

	while (i < n)
	{
		char temp = s[i];

		s[i] = s[n];
		s[n] = temp;
		i++;
		n--;
	}
}
