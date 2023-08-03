#include "main.h"

/**
 * _strlen_recursion - i tell you how long am
 *
 * @s: input string
 * Return: it is 0 or s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
