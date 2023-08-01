#include "main.h"

/**
 * _strspn - getting a length of a text
 *
 * @s: number of bytes in the initial segment of
 * @accept: it the bytes container
 * Return: it is s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	int i;
	int j;

	for (i = 0; s[i] != '\0' && found; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
	}
	return (count);
}
