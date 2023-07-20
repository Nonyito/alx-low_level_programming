#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - clock 24hrs list
 *
 * Return: non
 */

void jack_bauer(void)
{
	int hrs;
	int mns;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mns = 0; mns < 60; mns++)
		{
			_putchar("%d:%d\n"hrs, mns);
		}
	}
}
