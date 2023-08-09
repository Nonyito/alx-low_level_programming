#include "main.h"

/**
 * main - getting the command line infor
 *
 * @argc: arg count on terminal
 * @argv: arg vector on terminal
 * Return: it is 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		char *proname = argv[i];

		while (*proname != '\0')
		{
			_putchar(*proname);
			proname++;
		}
	}
	_putchar('\n');
	return (0);
}
