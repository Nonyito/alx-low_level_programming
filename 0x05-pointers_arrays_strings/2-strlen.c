#include "main.h"

/**
 * _strlen - return the leng of string
 *
 * @s: the input string
 * Return: the string len
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
