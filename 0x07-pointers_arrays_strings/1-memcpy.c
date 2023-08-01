#include "main.h"

/**
 * *_memcpy - copying memory areas
 *
 * @dest: copied memory is here
 * @src: data memory is here
 * @n: the memory int
 * Return: is the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
