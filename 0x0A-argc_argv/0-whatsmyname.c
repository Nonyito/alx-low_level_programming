#include "main.h"

/**
 * main - getting the command line infor
 *
 * @argc: arg count on terminal
 * @argv: arg vector on terminal
 * Return: it is 0
 */

int main(int argc, char* argv[])
{
	char *name = argv[0];
	_putchar(argc);

	while(*name != '\0')
	{
		_putchar(*name++);
	}
	_putchar('\n');
	return (0);
}
