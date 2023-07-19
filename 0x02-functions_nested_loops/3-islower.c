#include "main.h"
#include <stdio.h>

/**
 * _islower - it returns 1 if c is lower case otherwise 0
 *
 * @c: character to check for
 *
 * Return: is 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
