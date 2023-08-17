#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name print
 * @f: input print
 * Return: its a null
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	f(name);
}
