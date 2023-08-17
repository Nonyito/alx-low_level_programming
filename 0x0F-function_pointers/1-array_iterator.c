#include "function_pointers.h"

/**
 * array_iterator - chrismas is canclled
 *
 * @size: it the numbers
 * @array: numbers
 * @action: moving
 * Return: it is null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
