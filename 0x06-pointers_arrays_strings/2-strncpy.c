#include "main.h"

/**
 * *_strncpy - copying a string
 *
 * @dest: input string
 * @src: input string
 * @n: number
 * Return: it is l
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, s;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (s = 0; src[s] != '\0' && s < n; s++)
	{
		dest[i + s] = src[s];
	}
	dest[i + s] = '\0';
	return (dest);
}
