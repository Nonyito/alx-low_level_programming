#include <stdio.h>

/**
 * main - print put text
 *
 * Description: it prints the text without using puts and printf
 * Return: it is 1
 */

int main(void)
{
	char text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, sizeof(text) - 1);
	return (1);
}
