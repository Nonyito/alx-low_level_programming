#include "main.h"

/**
 * *string_toupper - I make lowercase to uppercase
 *
 * @str: input cases
 * Return: it is 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		i++;
	}
	return (str);
}
