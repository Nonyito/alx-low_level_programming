#include "main.h"

/**
 * *_strcat - concatenating two string into one
 *
 * @dest: input string 'Hello'
 * @src: input string 'World'
 * Return: it is void
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*(dest++) = *(src++);
		*dest = '\0';
	}
	return (p);
}
