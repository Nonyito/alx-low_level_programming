#include "main.h"

/**
 * *leet - encoded text onlyme can readit
 *
 * @str: input strings
 * Return: it is void
 */

char *leet(char *str)
{
	char *letter = "AEOTLaeotl";
	char *number = "4307143071";

	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; letter[n] != '\0'; n++)
		{
			if (str[i] == letter[n])
			{
				str[i] = number[n];
				break;
			}
		}
	}
	return (str);
}
