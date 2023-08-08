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
	while(argv != '\0')
	{
		_putchar("%s\n", argv++);
	}
	return (0);
}
