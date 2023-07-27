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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
