#include "main.h"

/**
 * main - entry point
 *
 * @argc: the numbers of args entered
 * @argv: the array of args availble
 * Return: it is 0
 */

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
	}
	_putchar('\n');
	return (0);
}
