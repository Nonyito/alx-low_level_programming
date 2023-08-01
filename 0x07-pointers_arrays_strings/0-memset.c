#include "main.h"

/**
 * *_memset - it fills the memory with a byte
 *
 * @s: my return to pointer
 * @b: the byte
 * @n: the int num
 * Return: it the s value
 */

char *_memset(char *s, char b, unsigned int n)
{
	void *s_ptr = (void)*s;

	for (unsigned int i = 0; i < n; i++)
	{
		*(char *)s_ptr = b;
		s_ptr = ((char *)s_ptr) + 1;
	}
	return (s);
}
