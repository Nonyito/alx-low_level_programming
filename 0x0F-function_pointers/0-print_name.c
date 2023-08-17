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
	while (*name)
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	f(name);
}
