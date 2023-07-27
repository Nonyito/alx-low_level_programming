#include "main.h"

/**
 * _strcmp - I do compare two strings
 *
 * @s1: input one
 * @s2: input two
 * Return: it is 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
