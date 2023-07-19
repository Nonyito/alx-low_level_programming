#include "main.h"
#include <stdio.h>

/**
 * _isalpha - give one if letter is upper or lower case
 *
 * @c: the character we are checking
 *
 * Return: it is 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
