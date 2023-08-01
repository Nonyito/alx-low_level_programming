#include "main.h"

/**
 * *_strchr - finding a string in character
 *
 * @c: returns a pointer
 * @s: it is not null
 * Return: it is NULL
 */

char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return &s[i];
		}
	}
	return (NULL);
}
