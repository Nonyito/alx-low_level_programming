#include "main.h"

/**
 * *create_array - this is array
 *
 * @size: is null or 0
 * @c: array string
 * Return: is arry or null
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(size * sizeof(char));

	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
