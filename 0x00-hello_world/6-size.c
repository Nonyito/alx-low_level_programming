#include <stdio.h>

/**
 * main - it prints the various of computer type compiled
 *
 * Description: printing out the compiled types of computer
 * Return: it is always 0
 */

int main(void)
{
	printf("Size of char is %d byt(s)\n", sizeof(char));
	printf("Size of int is %d byte(s)\n", sizeof(int));
	printf("Size of long is %d byte(s)\n", sizeof(long));
	printf("Size of long long is %d byte(s)\n", sizeof(long long));
	printf("Size of float is %d byte(s)\n", sizeof(float));
}
