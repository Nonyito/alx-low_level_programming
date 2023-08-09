#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 * Return: it is 0
 */

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			_putchar(*arg);
			arg++;
		}
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
